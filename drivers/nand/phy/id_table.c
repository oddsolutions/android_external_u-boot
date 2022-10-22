/* SPDX-License-Identifier: (GPL-2.0+ OR MIT) */
/*
 * drivers/nand/phy/id_table.c
 *
 * Copyright (C) 2020 Amlogic, Inc. All rights reserved.
 *
 */

#include "../include/phynand.h"


#ifdef AML_SLC_NAND_SUPPORT
struct nand_flash flash_ids_slc[] = {
	/***for SLC nand***/
	{NULL,}
};
#endif

#ifdef AML_MLC_NAND_SUPPORT
struct nand_flash flash_ids_mlc[] = {
/***for SLC nand***/
	{"TOSHIBA 128MB SLC TC58BVG0S3HBAI6",
		{NAND_MFR_TOSHIBA, 0xF1, 0x80, 0x15, 0xF2},
		2048,
		128,
		0x20000,
		64,
		1,
		20,
		25,
		0,
		0},
	{"TOSHIBA 256MB SLC TC58BVG0S3HBAI6",
		{NAND_MFR_TOSHIBA, 0xDA, 0x90, 0x15, 0xF6},
		2048,
		256,
		0x20000,
		64,
		1,
		20,
		25,
		0,
		0},
/***for MLC nand***/
	{"A revision NAND 2GiB H27UAG8T2A",
		{NAND_MFR_HYNIX, 0xd5, 0x94, 0x25, 0x44, 0x41},
		4096,
		2048,
		0x80000,
		224,
		1,
		20,
		15,
		0,
		0,
		NAND_MULTI_PLANE_MODE},
	{"A revision NAND 4GiB H27UBG8T2A",
		{NAND_MFR_HYNIX, 0xd7, 0x94, 0x9a, 0x74, 0x42},
		8192,
		4096,
		0x200000,
		448,
		1,
		20,
		15,
		0,
		0,
		NAND_MULTI_PLANE_MODE},
	{"B revision NAND 2GiB H27UAG8T2B",
		{NAND_MFR_HYNIX, 0xd5, 0x94, 0x9a, 0x74, 0x42},
		8192,
		2048,
		0x200000,
		448,
		1,
		20,
		15,
		0,
		0,
		NAND_MULTI_PLANE_MODE},
#if (AML_CFG_NEW_NAND_SUPPORT)
	{"B revision 26nm NAND 4GiB H27UBG8T2B",
		{NAND_MFR_HYNIX, 0xd7, 0x94, 0xda, 0x74, 0xc3},
		8192,
		4096,
		0x200000,
		640,
		1,
		16,
		15,
		0,
		HYNIX_26NM_4GB,
		NAND_MULTI_PLANE_MODE},
	{"B revision 26nm NAND 8GiB H27UCG8T2M",
		{NAND_MFR_HYNIX, 0xde, 0x94, 0xd2, 0x04, 0x43},
		8192,
		8192,
		0x200000,
		448,
		1,
		16,
		15,
		0,
		HYNIX_26NM_8GB,
		NAND_MULTI_PLANE_MODE},
	{"C revision 20nm NAND 4GiB H27UBG8T2C",
		{NAND_MFR_HYNIX, 0xd7, 0x94, 0x91, 0x60, 0x44},
		8192,
		4096,
		0x200000,
		640,
		1,
		16,
		15,
		0,
		HYNIX_20NM_4GB,
		NAND_MULTI_PLANE_MODE},
	{"A revision 20nm NAND 8GiB H27UCG8T2A",
		{NAND_MFR_HYNIX, 0xde, 0x94, 0xda, 0x74, 0xc4},
		8192,
		8192,
		0x200000,
		640,
		1,
		16,
		15,
		0,
		HYNIX_20NM_8GB,
		NAND_MULTI_PLANE_MODE},
	{"B revision 20nm NAND 8GiB H27UCG8T2B",
		{NAND_MFR_HYNIX, 0xde, 0x94, 0xeb, 0x74, 0x44},
		16384,
		8192,
		0x400000,
		1280,
		1,
		16,
		15,
		0,
		HYNIX_20NM_4GB,
		NAND_MULTI_PLANE_MODE },
	{"E revision 1Ynm NAND 8GiB H27UCG8T2E",
		{NAND_MFR_HYNIX, 0xde, 0x14, 0xA7, 0x42, 0x4A},
		16384,
		8192,
		0x400000,
		1664,
		1,
		16,
		15,
		0,
		HYNIX_1YNM,
		NAND_MULTI_PLANE_MODE },
#endif
#if (AML_CFG_NEW_NAND_SUPPORT)
	{"A revision 3D L04A NAND 8GiB MT29F64G08CBCGBSX", /* for Vccq 1.8v 153 ball VBGA */
		{NAND_MFR_MICRON, 0x64, 0x44, 0x32, 0xA5},
		16384, 8192, 0x800000, /* 2208,*/ /*1664,*/1728,
		//1, 16, 15, 5, MICRON_20NM, NAND_MULTI_PLANE_MODE | NAND_USE_SHAREPAGE_MODE},
		1, 16, 15, 5, MICRON_20NM,  NAND_USE_SHAREPAGE_MODE},
	{"A revision 3D L05B NAND 16GiB MT29F128G08CBCEB", /* for Vccq 1.8v 153 ball VBGA */
		{NAND_MFR_MICRON, 0x84, 0x44, 0x32, 0xAA},
		16384, 16384, 0x800000, /* 2208,*/ /*1664,*/1728,
		//1, 16, 15, 5, MICRON_20NM, NAND_MULTI_PLANE_MODE | NAND_USE_SHAREPAGE_MODE},
		1, 16, 15, 5, MICRON_20NM,  NAND_USE_SHAREPAGE_MODE},
	{"B revision L95B NAND 16GiB MT29F128G08CBECB",
		{NAND_MFR_MICRON, 0x84, 0x64, 0x54, 0xA9},
		16384, 16384, 0x800000, 1872,
		1, 16, 15, 3, MICRON_20NM, NAND_MULTI_PLANE_MODE},
	{"C revision L84C NAND 8GiB MT29F64G08CBCDB",
		{NAND_MFR_MICRON, 0x64, 0x64, 0x3C, 0xA5},
		16384, 8192, 0x800000, 1216,
		1, 16, 15, 3, MICRON_20NM, NAND_MULTI_PLANE_MODE},

	{"B revision NAND L85C 16GiB MT29F128G08CBEBB",
		{NAND_MFR_MICRON, 0x84, 0x64, 0x3c, 0xA9,0x04},
		16384,
		16384,
		0x800000,
		1216,
		1,
		16,
		15,
		5,
		MICRON_20NM,
		NAND_MULTI_PLANE_MODE},
	{"B revision NAND 8GiB MT29F64G08CBABA",
		{NAND_MFR_MICRON, 0x64, 0x44, 0x4B, 0xA9},
		8192,
		8192,
		0x200000,
		744,
		1,
		16,
		15,
		5,
		MICRON_20NM,
		NAND_MULTI_PLANE_MODE},
	{"D revision NAND 4GiB MT29F32G08CBADA",
		{NAND_MFR_MICRON, 0x44, 0x44, 0x4B, 0xA9},
		8192,
		4096,
		0x200000,
		744,
		1,
		16,
		15,
		5,
		MICRON_20NM,
		NAND_MULTI_PLANE_MODE},
	{"1 Generation NAND 8GiB JS29F64G08ACMF1",
		{NAND_MFR_INTEL, 0x88, 0x24, 0x4b, 0xA9, 0x84},
		8192,
		8192,
		0x200000,
		448,
		1,
		20,
		15,
		0,
		INTEL_20NM,
		NAND_MULTI_PLANE_MODE},
	{"1 Generation NAND 16GiB JS29F64G08CCMF1",
		{NAND_MFR_INTEL,
		0x88,
		0x24,
		0x4b,
		0xA9,
		0x84},
		8192,
		16384,
		0x200000,
		448,
		1,
		20,
		15,
		0,
		INTEL_20NM,
		NAND_MULTI_PLANE_MODE},
#endif

	{"A revision NAND 4GiB MT29F32G-A",
		{NAND_MFR_MICRON, 0xd7, 0x94, 0x3e, 0x84},
		4096,
		4096,
		0x80000,
		218,
		1,
		16,
		15,
		0,
		0,
		NAND_MULTI_PLANE_MODE},
	{"A revision NAND 16GiB MT29F128G-A",
		{NAND_MFR_MICRON, 0xd9, 0xd5, 0x3e, 0x88},
		4096,
		16384,
		0x80000,
		218,
		1,
		16,
		15,
		0,
		0,
		NAND_MULTI_PLANE_MODE},
	{"B revision NAND 4GiB MT29F32G-B",
		{NAND_MFR_MICRON, 0x68, 0x04, 0x46, 0x89},
		4096,
		4096,
		0x100000,
		224,
		1,
		20,
		15,
		4,
		0,
		NAND_MULTI_PLANE_MODE},
	{"B revision NAND 8GiB MT29F64G-B",
		{NAND_MFR_MICRON, 0x88, 0x05, 0xc6, 0x89},
		4096,
		8192,
		0x100000,
		224,
		1,
		20,
		15,
		4,
		0,
		NAND_MULTI_PLANE_MODE},
	{"C revision NAND 4GiB MT29F32G-C",
		{NAND_MFR_MICRON, 0x68, 0x04, 0x4a, 0xa9},
		4096,
		4096,
		0x100000,
		224,
		1,
		16,
		15,
		5,
		0,
		NAND_MULTI_PLANE_MODE},
	{"C revision NAND 8GiB MT29F64G-C",
		{NAND_MFR_MICRON, 0x88, 0x04, 0x4b, 0xa9},
		8192,
		8192,
		0x200000,
		448,
		1,
		16,
		15,
		5,
		0,
		NAND_MULTI_PLANE_MODE},
	{"C revision NAND 32GiB MT29F256G-C",
		{NAND_MFR_MICRON, 0xa8, 0x05, 0xcb, 0xa9},
		8192,
		16384,
		0x200000,
		448,
		2,
		16,
		15,
		5,
		0,
		NAND_MULTI_PLANE_MODE},

	{"1 Generation NAND 4GiB JS29F32G08AA-1",
		{NAND_MFR_INTEL, 0x68, 0x04, 0x46, 0xA9},
		4096,
		4096,
		0x100000,
		218,
		1,
		20,
		15,
		0,
		0,
		NAND_MULTI_PLANE_MODE},
	{"1 Generation NAND 8GiB JS29F64G08AA-1",
		{NAND_MFR_INTEL, 0x88, 0x24, 0x4b, 0xA9},
		8192,
		8192,
		0x200000,
		448,
		1,
		20,
		15,
		0,
		0,
		NAND_MULTI_PLANE_MODE},

	{"E serials NAND 2GiB TC58NVG4D2ETA00",
		{NAND_MFR_TOSHIBA, 0xD5, 0x94, 0x32, 0x76, 0x54},
		8192,
		2048,
		0x100000,
		376,
		1,
		20,
		25,
		0,
		0,
		NAND_MULTI_PLANE_MODE},
	{"E serials NAND 4GiB TC58NVG5D2ETA00",
		{NAND_MFR_TOSHIBA, 0xD7, 0x94, 0x32, 0x76, 0x54},
		8192,
		4096,
		0x100000,
		376,
		1,
		20,
		25,
		0,
		0,
		NAND_MULTI_PLANE_MODE},
	{"F serials NAND 2GiB TC58NVG4D2FTA00",
		{NAND_MFR_TOSHIBA, 0xD5, 0x94, 0x32, 0x76, 0x55},
		8192,
		2076,
		0x100000,
		448,
		1,
		20,
		25,
		0,
		0,
		NAND_MULTI_PLANE_MODE},
	{"F serials NAND 4GiB TC58NVG5D2FTA00",
		{NAND_MFR_TOSHIBA, 0xD7, 0x94, 0x32, 0x76, 0x55},
		8192,
		4096,
		0x100000,
		448,
		1,
		20,
		25,
		0,
		0,
		NAND_MULTI_PLANE_MODE},
	{"F serials NAND 8GiB TC58NVG6D2FTA00",
		{NAND_MFR_TOSHIBA, 0xDE, 0x94, 0x32, 0x76, 0x55},
		8192,
		8192,
		0x100000,
		448,
		1,
		20,
		25,
		0,
		0,
		NAND_MULTI_PLANE_MODE},
	{"F serials NAND 8GiB TH58NVG7D2FTA20",
		{NAND_MFR_TOSHIBA, 0xDE, 0x95, 0x32, 0x7a, 0x55},
		8192,
		8200,
		0x100000,
		448,
		2,
		20,
		25,
		0,
		0,
		NAND_MULTI_PLANE_MODE},
	{"Toshiba SLC   512MiB 1.8V 8-bit",
		{0x98, 0xac, 0x90, 0x26, 0x76},
		4096,
		512,
		0x40000,
		116,
		1,
		16,
		15,
		0,
		0,
		0},
#if (AML_CFG_NEW_NAND_SUPPORT)
	{"F serials NAND 4GiB TC58NVG5D2HTA00",
		{NAND_MFR_TOSHIBA, 0xD7, 0x94, 0x32, 0x76, 0x56},
		8192,
		4096,
		0x100000,
		640,
		1,
		20,
		25,
		0,
		TOSHIBA_2XNM,
		NAND_MULTI_PLANE_MODE},
	{"F serials NAND 8GiB TC58NVG6D2GTA00",
		{NAND_MFR_TOSHIBA, 0xDE, 0x94, 0x82, 0x76, 0x56},
		8192,
		8192,
		0x200000,
		640,
		1,
		20,
		25,
		0,
		TOSHIBA_2XNM,
		NAND_MULTI_PLANE_MODE},
	{"F serials NAND 8GiB TC58TEG6DCJTA00",
		{NAND_MFR_TOSHIBA, 0xDE, 0x84, 0x93, 0x72, 0x57},
		16384,
		8192,
		0x400000,
		1280,
		1,
		20,
		25,
		0,
		TOSHIBA_2XNM,
		0},  /* not surrport two plane mode */
	{"A serials NAND 4GiB TC58TEG5DCJTA00 ",
		{NAND_MFR_TOSHIBA, 0xD7, 0x84, 0x93, 0x72, 0x57},
		16384,
		4096,
		0x400000,
		1280,
		1,
		20,
		25,
		0,
		TOSHIBA_2XNM,
		0 },
	{"B serials NAND 16GiB TC58TEG7DCJTA00 ",
		{NAND_MFR_TOSHIBA, 0x3a, 0x85, 0x93, 0x76, 0x57},
		16384,
		16384,
		0x400000,
		1280,
		2,
		20,
		25,
		0,
		TOSHIBA_2XNM,
		0 },
	{"A serials NAND 4GiB TC58TEG5DCKTA00 ",
		{NAND_MFR_TOSHIBA, 0xD7, 0x84, 0x93, 0x72, 0x50},
		16384,
		4096,
		0x400000,
		1280,
		1,
		20,
		25,
		0,
		TOSHIBA_A19NM,
		0 },
	{"A serials vccq=1.8v NAND 8GiB TC58TEG6DDKTA00 ",
		{NAND_MFR_TOSHIBA, 0xDE, 0x94, 0x93, 0x76, 0x50},
		16384,
		8192,
		0x400000,
		1280,
		1,
		20,
		25,
		0,
		TOSHIBA_A19NM,
		NAND_MULTI_PLANE_MODE },
	{"A serials vccq=3.3v NAND 8GiB TC58TEG6DDKTA00 ",
		{NAND_MFR_TOSHIBA, 0xDE, 0x94, 0x93, 0x76, 0x58},
		16384,
		8192,
		0x400000,
		1280,
		1,
		20,
		25,
		0,
		TOSHIBA_A19NM,
		NAND_MULTI_PLANE_MODE },

	/* 15nm */
	{"A serials NAND 8GiB TC58TEG6DDLTA00 ",
		{NAND_MFR_TOSHIBA, 0xDE, 0x94, 0x93, 0x76, 0x51},
		16384,
		8192,
		0x400000,
		1280,
		1,
		20,
		25,
		0,
		TOSHIBA_15NM,
		NAND_MULTI_PLANE_MODE },
	{"A serials NAND 16GiB TC58TEG7DDLTA00 ",
		{NAND_MFR_TOSHIBA, 0x3A, 0x94, 0x93, 0x76, 0x51},
		16384,
		16384,
		0x400000,
		1280,
		1,
		20,
		25,
		0,
		TOSHIBA_15NM,
		NAND_MULTI_PLANE_MODE },
#endif
#if (AML_CFG_NEW_NAND_SUPPORT)
	{"A serials NAND 8GiB SDTNQGAMA-008G ",
		{NAND_MFR_SANDISK, 0xDE, 0x94, 0x93, 0x76, 0x57},
		16384,
		8192,
		0x400000,
		1280,
		1,
		20,
		25,
		0,
		SANDISK_19NM,
		NAND_MULTI_PLANE_MODE},
	{"A serials NAND 4GiB SDTNQGAMA-004G ",
		{NAND_MFR_SANDISK, 0xD7, 0x84, 0x93, 0x72, 0x57},
		16384,
		4096,
		0x400000,
		1280,
		1,
		20,
		25,
		0,
		SANDISK_19NM, 0},
	{"A serials NAND 8GiB SDTNPMAHEM-008G ",
		{NAND_MFR_SANDISK, 0xDE, 0xA4, 0x82, 0x76, 0x56},
		8192,
		8192,
		0x200000,
		640,
		1,
		20,
		25,
		0,
		SANDISK_24NM, 0},
	{"A serials NAND 8GiB SDTNRGAMA-008G ",
		{NAND_MFR_SANDISK, 0xDE, 0x94, 0x93, 0x76, 0x50},
		16384,
		8192,
		0x400000,
		1280,
		1,
		20,
		25,
		0,
		SANDISK_A19NM,
		NAND_MULTI_PLANE_MODE},
	{"A serials NAND 4GiB SDTNRFAMA-004G ",
		{NAND_MFR_SANDISK, 0xD7, 0x84, 0x93, 0x72, 0x50},
		16384,
		4096,
		0x400000,
		1280,
		1,
		20,
		25,
		0,
		SANDISK_A19NM_4G,
		0},
#endif

	{"M Generation NAND 2GiB K9GAG08U0M",
		{NAND_MFR_SAMSUNG, 0xD5, 0x14, 0xb6, 0x74},
		4096,
		2048,
		0x80000,
		128,
		1,
		20,
		15,
		0,
		0,
		0},
	{"5 Generation NAND 2GiB K9GAG08X0D",
		{NAND_MFR_SAMSUNG, 0xD5, 0x94, 0x29, 0x34, 0x41},
		4096,
		2048,
		0x80000,
		218,
		1,
		20,
		15,
		0,
		0,
		NAND_MULTI_PLANE_MODE},
	{"6 Generation NAND 2GiB K9GAG08U0E",
		{NAND_MFR_SAMSUNG, 0xD5, 0x84, 0x72, 0x50, 0x42},
		8192,
		2048,
		0x100000,
		436,
		1,
		25,
		15,
		0,
		0,
		0},
	{"7 Generation NAND 2GiB K9GAG08U0F",
		{NAND_MFR_SAMSUNG, 0xD5, 0x94, 0x76, 0x54, 0x43},
		8192,
		2048,
		0x100000,
		512,
		1,
		25,
		15,
		0,
		0,
		NAND_MULTI_PLANE_MODE},
	{"6 Generation NAND 4GiB K9LBG08U0E",
		{NAND_MFR_SAMSUNG, 0xD7, 0xC5, 0x72, 0x54, 0x42},
		8192,
		4096,
		0x100000,
		436,
		1,
		20,
		15,
		0,
		0,
		NAND_MULTI_PLANE_MODE},
	{"6 Generation NAND 8GiB K9HCG08U0E",
		{NAND_MFR_SAMSUNG, 0xDE, 0xC5, 0x72, 0x54, 0x42},
		8192,
		8192,
		0x100000,
		436,
		1,
		20,
		15,
		0,
		0,
		NAND_MULTI_PLANE_MODE},
	{"2 Generation NAND 4GiB K9GBG08U0A",
		{NAND_MFR_SAMSUNG, 0xD7, 0x94, 0x7a, 0x54, 0x43},
		8192,
		4152,
		0x100000,
		640,
		1,
		20,
		15,
		0,
		0,
		NAND_MULTI_PLANE_MODE},
	{"2 Generation NAND 8GiB K9LCG08U0A",
		{NAND_MFR_SAMSUNG, 0xDE, 0xD5, 0x7a, 0x58, 0x43},
		8192,
		8304,
		0x100000,
		640,
		1,
		20,
		15,
		0,
		0,
		NAND_MULTI_PLANE_MODE},
#if (AML_CFG_NEW_NAND_SUPPORT)
	{"2 Generation NAND 4GiB K9GBG08U0B",
		{NAND_MFR_SAMSUNG, 0xD7, 0x94, 0x7e, 0x64, 0x44},
		8192,
		4096,
		0x100000,
		640,
		1,
		20,
		15,
		0,
		SUMSUNG_2XNM,
		NAND_MULTI_PLANE_MODE},

	{"2 Generation NAND 8GiB K9GLCG08U0A",
		{NAND_MFR_SAMSUNG, 0xDE, 0xA4, 0x7A, 0x68, 0xC4},
		8192,
		8192,
		0x100000,
		640,
		1,
		20,
		15,
		0,
		SUMSUNG_2XNM,
		NAND_MULTI_PLANE_MODE},
	{"2 Generation NAND 8GiB K9LCG08U0B",
		{NAND_MFR_SAMSUNG, 0xDE, 0xD5, 0x7e, 0x68, 0x44},
		8192,
		8192,
		0x100000,
		640,
		1,
		20,
		15,
		0,
		SUMSUNG_2XNM,
		NAND_MULTI_PLANE_MODE},
#endif
	{NULL,}
};
#endif

