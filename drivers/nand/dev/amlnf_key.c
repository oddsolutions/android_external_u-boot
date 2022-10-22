/* SPDX-License-Identifier: (GPL-2.0+ OR MIT) */
/*
 * drivers/nand/dev/amlnf_key.c
 *
 * Copyright (C) 2020 Amlogic, Inc. All rights reserved.
 *
 */

#include "../include/phynand.h"


static struct amlnand_chip *aml_chip_key = NULL;
static struct amlnand_chip *aml_ddr_para = NULL;

/*
 * This funcion reads the u-boot keys.
 */
int amlnf_key_read(u8 * buf, int len, uint32_t *actual_lenth)
{
	struct amlnand_chip * aml_chip = aml_chip_key;
	struct nand_menson_key *key_ptr = NULL;
	u32 keysize = aml_chip->keysize;
	int error = 0;

	*actual_lenth = keysize;

	if (aml_chip == NULL) {
		printk("%s(): amlnf key not ready yet!", __func__);
		return -EFAULT;
	}

	if (len > keysize) {
		/*
		No return here! keep consistent, should memset zero
		for the rest.
		*/
		printk("%s key data len too much\n",__func__);
		memset(buf + keysize, 0 , len - keysize);
		//return -EFAULT;
	}

	key_ptr = kzalloc(aml_chip->keysize + sizeof(u32), GFP_KERNEL);
	if (key_ptr == NULL)
		return -ENOMEM;

	error = amlnand_read_info_by_name(aml_chip,
		(u8 *)&(aml_chip->nand_key),
		(u8 *)key_ptr,
		(u8*)KEY_INFO_HEAD_MAGIC,
		aml_chip->keysize);
	if (error) {
		printk("%s: read key error\n",__func__);
		error = -EFAULT;
		goto exit;
	}

	memcpy(buf, key_ptr->data, keysize);

exit:
	kfree(key_ptr);
	return 0;
}

/*
 * This funcion write the keys.
 */
int amlnf_key_write(u8 *buf, int len, uint32_t *actual_lenth)
{
	struct amlnand_chip * aml_chip = aml_chip_key;
	struct nand_menson_key *key_ptr = NULL;
	u32 keysize = aml_chip->keysize;
	int error = 0;
	struct nand_flash *flash = &aml_chip_key->flash;

	if (aml_chip == NULL) {
		printk("%s(): amlnf key not ready yet!", __func__);
		return -EFAULT;
	}

	if (len > keysize) {
		/*
		No return here! keep consistent, should memset zero
		for the rest.
		*/
		printk("key data len too much,%s\n",__func__);
		memset(buf + keysize, 0 , len - keysize);
		//return -EFAULT;
	}

	key_ptr = kzalloc(aml_chip->keysize + flash->pagesize, GFP_KERNEL);
	if (key_ptr == NULL)
		return -ENOMEM;

	memcpy(key_ptr->data, buf, keysize);

	error = amlnand_save_info_by_name(aml_chip,
		(u8 *)&(aml_chip->nand_key),
		(u8 *)key_ptr,
		(u8 *)KEY_INFO_HEAD_MAGIC,
		aml_chip->keysize);
	if (error) {
		printk("save key error,%s\n",__func__);
		error = -EFAULT;
		goto exit;
	}
exit:
	kfree(key_ptr);
	return error;
}

int amlnf_key_erase(void)
{
	int ret = 0;
	if (aml_chip_key == NULL) {
		printk("%s amlnf not ready yet!\n", __func__);
		return -1;
	}
	ret = amlnand_erase_info_by_name(aml_chip_key,
		(u8 *)&(aml_chip_key->nand_key),
		(u8 *)KEY_INFO_HEAD_MAGIC);
	if (ret) {
		printk("%s erase key error\n", __func__);
		ret = -EFAULT;
	}
	return ret;
}


int aml_key_init(struct amlnand_chip *aml_chip)
{
	int ret = 0;
	struct nand_menson_key *key_ptr = NULL;

	/* avoid null */
	aml_chip_key = aml_chip;

	key_ptr = aml_nand_malloc(aml_chip->keysize +sizeof(u32));
	if (key_ptr == NULL) {
		printk("nand malloc for key_ptr failed");
		ret = -1;
		goto exit_error0;
	}
	memset(key_ptr, 0x0, aml_chip->keysize + sizeof(u32));
	printk("%s probe.\n", __func__);

	ret = amlnand_info_init(aml_chip,
		(u8 *)&(aml_chip->nand_key),
		(u8 *)key_ptr,(u8 *)KEY_INFO_HEAD_MAGIC,
		aml_chip->keysize);
	if (ret < 0) {
		printk("invalid nand key\n");
	}
exit_error0:
	if (key_ptr) {
		aml_nand_free(key_ptr);
		key_ptr =NULL;
	}
	return ret;
}

int amlnf_ddr_parameter_read(u8 * buf, int len)
{
	struct amlnand_chip * aml_chip = aml_ddr_para;
	u8 *ddr_ptr = NULL;
	int ddrsize = (int)aml_chip->ddrsize;
	int error = 0;

	if (aml_chip == NULL) {
		printk("%s(): amlnf ddr parameter not ready yet!", __func__);
		return -EFAULT;
	}

	if (len > ddrsize) {
		/*
		No return here! keep consistent, should memset zero
		for the rest.
		*/
		printk("%s ddr data len too much\n",__func__);
		memset(buf + ddrsize, 0 , len - ddrsize); /*need fixme liuxj*/
		//return -EFAULT;
	}

	ddr_ptr = kzalloc(aml_chip->ddrsize, GFP_KERNEL);
	if (ddr_ptr == NULL)
		return -ENOMEM;

	error = amlnand_read_info_by_name(aml_chip,
		(u8 *)&(aml_chip->nand_ddr_para),
		(u8 *)ddr_ptr,
		(u8 *)DDR_PARAMETER_HEAD_MAGIC,
		aml_chip->ddrsize);
	if (error) {
		printk("%s: read ddr para error\n",__func__);
		error = -EFAULT;
		goto exit;
	}

	ddrsize = min_t(int, len, ddrsize);
	memcpy(buf, ddr_ptr, ddrsize);
exit:
	kfree(ddr_ptr);
	return 0;
}


int amlnf_ddr_parameter_write(u8 *buf, int len)
{
	struct amlnand_chip * aml_chip = aml_ddr_para;
	u8 *ddr_ptr = NULL;
	int ddrsize = (int)aml_chip->ddrsize;
	int error = 0;

	if (aml_chip == NULL) {
		printk("%s(): amlnf ddr parameter not ready yet!", __func__);
		return -EFAULT;
	}

	if (len > ddrsize) {
		/*
		No return here! keep consistent, should memset zero
		for the rest.
		*/
		printk("ddr parameter data len too much,%s\n",__func__);
		memset(buf + ddrsize, 0 , len - ddrsize);
		//return -EFAULT;
	}

	ddr_ptr = kzalloc(ddrsize, GFP_KERNEL);
	if (ddr_ptr == NULL)
		return -ENOMEM;

	ddrsize = min_t(int, len, ddrsize);
	memcpy(ddr_ptr, buf, ddrsize);

	error = amlnand_save_info_by_name(aml_chip,
		(u8 *)&(aml_chip->nand_ddr_para),
		(u8 *)ddr_ptr,
		(u8 *)DDR_PARAMETER_HEAD_MAGIC,
		aml_chip->ddrsize);
	if (error) {
		printk("save ddr parameter error,%s\n",__func__);
		error = -EFAULT;
		goto exit;
	}
exit:
	kfree(ddr_ptr);
	return error;
}

int amlnf_ddr_parameter_erase(void)
{
	int ret = 0;
	if (aml_ddr_para == NULL) {
		printk("%s amlnf not ready yet!\n", __func__);
		return -1;
	}
	ret = amlnand_erase_info_by_name(aml_ddr_para,
		(u8 *)&(aml_ddr_para->nand_ddr_para),
		(u8 *)DDR_PARAMETER_HEAD_MAGIC);
	if (ret) {
		printk("%s erase ddr error\n", __func__);
		ret = -EFAULT;
	}
	return ret;
}


int aml_ddr_parameter_init(struct amlnand_chip *aml_chip)
{
	int ret = 0;
	u8 *ddr_ptr = NULL;

	/* avoid null */
	aml_ddr_para = aml_chip;

	ddr_ptr = aml_nand_malloc(aml_chip->ddrsize);
	if (ddr_ptr == NULL) {
		printk("nand malloc for ddr failed");
		ret = -1;
		goto exit_error0;
	}
	memset(ddr_ptr, 0x0, aml_chip->ddrsize);
	printk("%s probe.\n", __func__);

	ret = amlnand_info_init(aml_chip,
		(u8 *)&(aml_chip->nand_ddr_para),
		(u8 *)ddr_ptr,(u8 *)DDR_PARAMETER_HEAD_MAGIC,
		aml_chip->ddrsize);
	if (ret < 0) {
		printk("invalid nand ddr parameter\n");
	}
exit_error0:
	if (ddr_ptr) {
		aml_nand_free(ddr_ptr);
		ddr_ptr =NULL;
	}
	return ret;
}

