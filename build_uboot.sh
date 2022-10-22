#!/bin/bash

exec_name=$0

set -o errtrace
trap 'echo Fatal error: script ${exec_name} aborting at line $LINENO, command \"$BASH_COMMAND\" returned $?; exit 1' ERR

cpu_num=$(grep -c processor /proc/cpuinfo)

DIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )"

function usage(){
  echo "Usage: ${exec_name} <board> [workspace path]"
  echo "supported boards: sabrina-b3, sabrina-b4"
}

readonly default=".:--avb2"
readonly fip_dir="$DIR/fip"

readonly sign_boot_tool="$DIR/../sdk/tools/sign_bootloader.sh"
readonly sign_boot_keys="$DIR/../sdk/keys/"
readonly avb_tool="$DIR/../sdk/tools/avbtool"
readonly avb_pubkey_h_dir="$DIR/include/generated"

function extract_avb_key_array_to_file() {
  local array_name="$1"
  local file="$2"
  if [ -z "$avb_key_array" ]; then
    echo "Error: avb_key_array have to be set before calling this function" >&2
  fi

  local i
  local avb_key_num=${#avb_key_array[@]}
  for i in $(seq 0 $((avb_key_num - 1))); do
    local avb_key="${avb_key_array[i]}"
    "$avb_tool" extract_public_key \
      --key "${avb_key}" \
      --output "${array_name}_${i}"
    xxd -i "${array_name}_${i}" >> "$file"
  done
  sed -i 's/^unsigned char/const uint8_t/' "$file"
  sed -i 's/^unsigned int/const size_t/' "$file"
  echo "const uint8_t *const ${array_name}[] = {" >> "$file"
  for i in $(seq 0 $((avb_key_num - 1))); do
    echo "  ${array_name}_${i}," >> "$file"
  done
  echo "};" >> "$file"
  echo "const size_t ${array_name}_len[] = {" >> "$file"
  for i in $(seq 0 $((avb_key_num - 1))); do
    # The following line is not accepted by gcc 4.9, use sizeof instead
    # echo "  ${array_name}_${i}_len," >> "$file"
    echo "  sizeof(${array_name}_${i})," >> "$file"
  done
  echo "};" >> "$file"
  echo "const size_t ${array_name}_num = ${avb_key_num};" >> "$file"
}

function extract_avb_keys() {
  if [ -z "$avb_keys" ]; then
    echo "Error: avb_keys was not assigned" >&2
    return 1
  fi
  if [ -z "$avb_keys_external" ]; then
    echo "Error: avb_keys_external was not assigned" >&2
    return 1
  fi

  mkdir -p "$avb_pubkey_h_dir"
  pushd "$avb_pubkey_h_dir"
  rm -f avb2_kpub_vendor.h || true

  avb_key_array=("${avb_keys[@]}")
  extract_avb_key_array_to_file "avb2_kpub_vendor" avb2_kpub_vendor.h

  avb_key_array=("${avb_keys_external[@]}")
  extract_avb_key_array_to_file "avb2_kpub_vendor_external" avb2_kpub_vendor.h

  popd
}

function building_uboot(){
  soc_family_name=$1
  local_name=$2
  rev=$3
  board_name=$4

  config=${local_name}_${rev}

  extract_avb_keys

  echo "building u-boot for ${board}"
  $fip_dir/mk ${config} --board_name $board_name \
                        --update-bl2-src ../bl2 \
                        --update-bl30-src ../bl30 \
                        --update-bl31-src ../bl31 \
                        --update-bl32-src ../bl32 \
                        --update-bl2 \
                        --update-bl30 \
                        --update-bl31 \
                        --update-bl32 \
                        --avb2


  if [ ! -z $workspace_path ]; then
    # Copy bl2 and bl3x images for bootloader signing under android source.
    local bootloader_path=${workspace_path}/device/google/$product/prebuilt/bootloader
    mkdir -p ${bootloader_path}
    for bl_filename in "bl2_new.bin" "bl30_new.bin" "bl31.img" "bl32.img" "bl33.bin"; do
      cp -v $fip_dir/build/$bl_filename ${bootloader_path}/${bl_filename}.${board}
    done

    # copy ddr fw
    for fw_filename in "aml_ddr.fw" \
                       "ddr3_1d.fw" \
                       "ddr4_1d.fw" \
                       "ddr4_2d.fw" \
                       "diag_lpddr4.fw" \
                       "lpddr3_1d.fw" \
                       "lpddr4_1d.fw" \
                       "lpddr4_2d.fw" \
                       "piei.fw" ; do
      cp -v $fip_dir/${soc_family_name}/$fw_filename ${bootloader_path}
    done
  fi
}

function build_bootloader_img() {
  local suffix=""
  while [ $# -gt 0 ]; do
    case "$1" in
      --suffix)
        suffix="_$2"
        shift
        ;;
    esac
    shift
  done

  local bl_img_dir=${workspace_path}/device/google/${product}
  local bootloader_img=${bl_img_dir}/bootloader${suffix}.img
  mkdir -p ${bl_img_dir}

  set -euo pipefail
  "$sign_boot_tool" \
    --board "$board" \
    --prebuilt_dir "${workspace_path}/device/google/${product}/prebuilt/bootloader" \
    --output_img "$bootloader_img" \
    --key_dir "$sign_boot_keys" \

  bootloader_version_file=${DIR}/build/include/generated/timestamp_autogenerated.h
  bootloader_version="01.01.$(cat ${bootloader_version_file} | tail -n 1 | cut -f 2 -d '"')"
  bootloader_sha1=$(sha1sum --tag ${bootloader_img} | cut -f 4 -d ' ')
  echo "$bootloader_sha1 $bootloader_version" > ${bl_img_dir}/bootloader${suffix}.img.sha1
  cat > $bl_img_dir/board-info${suffix}.txt <<EOF
require board=sabrina
require version-bootloader=${bootloader_version}
EOF
}

if (( $# < 1 ))
then
  usage
  exit 2
fi

pushd $DIR

readonly board=$1
readonly workspace_path=$2
readonly product=$(echo ${board} | cut -d '-' -f 1)

readonly cross_compile=$PWD/../prebuilt/toolchain/aarch64/bin/aarch64-cros-linux-gnu-
readonly cross_compile_t32=$PWD/../prebuilt/toolchain/arm/bin/arm-none-eabi-

case $board in
  sabrina-b3)
    export CROSS_COMPILE=$cross_compile
    export CROSS_COMPILE_T32=$cross_compile_t32
    export ENABLE_UBOOT_UPDATE=1
    avb_keys=(
      "$DIR/../sdk/keys/verifiedboot_pub_dev.pem"
      "$DIR/../sdk/keys/verifiedboot_pub_release.pem"
    )
    avb_keys_external=(
      "$DIR/../sdk/keys/verifiedboot_pub_external_dev.pem"
      "$DIR/../sdk/keys/verifiedboot_pub_external_release.pem"
    )
    building_uboot g12a sm1_sabrina v1 $board
    build_bootloader_img
    ;;
  sabrina-b4)
    export CROSS_COMPILE=$cross_compile
    export CROSS_COMPILE_T32=$cross_compile_t32
    export ENABLE_UBOOT_UPDATE=0
    avb_keys=(
      "$DIR/../sdk/keys/verifiedboot_pub_release.pem"
    )
    avb_keys_external=(
      "$DIR/../sdk/keys/verifiedboot_pub_external_release.pem"
    )
    building_uboot g12a sm1_sabrina v1 $board
    build_bootloader_img --suffix release
    ;;
  *)
    echo "unknown board: $board"
    exit 1
esac

popd
