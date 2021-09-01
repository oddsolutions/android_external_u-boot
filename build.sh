export CROSS_COMPILE=/home/$USER/bin/toolchains/gcc-linaro-aarch64-none-elf/bin/aarch64-none-elf-
export CROSS_COMPILE_T32=/home/$USER/bin/toolchains/gcc-linaro-arm-none-eabi/bin/arm-none-eabi-
make distclean
make sm1_sabrina_v1_defconfig
make
