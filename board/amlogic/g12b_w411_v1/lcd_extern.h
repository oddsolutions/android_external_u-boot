/* SPDX-License-Identifier: (GPL-2.0+ OR MIT) */
/*
 * board/amlogic/g12b_w411_v1/lcd_extern.h
 *
 * Copyright (C) 2020 Amlogic, Inc. All rights reserved.
 *
 */

#ifndef _DFT_LCD_EXTERN_H_
#define _DFT_LCD_EXTERN_H_

static unsigned char ext_init_on_table_TL070WSH27[LCD_EXTERN_INIT_ON_MAX] = {
	0x15, 2, 0x25, 0x55,
	0x15, 2, 0x36, 0x01,
	//0x15, 2, 0x25, 0x00,

	0x15, 2, 0xB1, 0x30,
	0x15, 2, 0xB2, 0x10,
	0x15, 2, 0x80, 0x58,
	0x15, 2, 0x81, 0x47,
	0x15, 2, 0x82, 0xD4,
	0x15, 2, 0x83, 0x88,
	0x15, 2, 0x84, 0xA9,
	0x15, 2, 0x85, 0xC3,
	0x15, 2, 0x86, 0x82,
	0xfd, 1, 150,  /* delay 150ms */

	0x05, 1, 0x11,
	0xfd, 1, 200,  /* delay 120ms */
	0x05, 1, 0x29,
	0xff, 0, /* ending flag */
};

static unsigned char ext_init_off_table_TL070WSH27[LCD_EXTERN_INIT_OFF_MAX] = {
	0x05, 1, 0x28, /* display off */
	0xfd, 1, 30,      /* delay 30ms */
	0x05, 1, 0x10, /* sleep in */
	0xfd, 1, 10,
	0xff, 0,   /* ending flag */
};

static unsigned char ext_init_on_table_TL070HDV03CT[LCD_EXTERN_INIT_ON_MAX] = {
	0x39, 4, 0xFF, 0x98, 0x81, 0x03,
	0x15, 2, 0x01, 0x00,
	0x15, 2, 0x02, 0x00,
	0x15, 2, 0x03, 0x72,
	0x15, 2, 0x04, 0x00,
	0x15, 2, 0x05, 0x00,
	0x15, 2, 0x06, 0x09,
	0x15, 2, 0x07, 0x00,
	0x15, 2, 0x08, 0x00,
	0x15, 2, 0x09, 0x01,
	0x15, 2, 0x0A, 0x00,
	0x15, 2, 0x0B, 0x00,
	0x15, 2, 0x0C, 0x01,
	0x15, 2, 0x0D, 0x00,
	0x15, 2, 0x0E, 0x00,
	0x15, 2, 0x0F, 0x14,
	0x15, 2, 0x10, 0x14,
	0x15, 2, 0x11, 0x00,
	0x15, 2, 0x12, 0x00,
	0x15, 2, 0x13, 0x00,
	0x15, 2, 0x14, 0x00,
	0x15, 2, 0x15, 0x00,
	0x15, 2, 0x16, 0x00,
	0x15, 2, 0x17, 0x00,
	0x15, 2, 0x18, 0x00,
	0x15, 2, 0x19, 0x00,
	0x15, 2, 0x1A, 0x00,
	0x15, 2, 0x1B, 0x00,
	0x15, 2, 0x1C, 0x00,
	0x15, 2, 0x1D, 0x00,
	0x15, 2, 0x1E, 0x40,
	0x15, 2, 0x1F, 0x80,
	0x15, 2, 0x20, 0x05,
	0x15, 2, 0x21, 0x02,
	0x15, 2, 0x22, 0x00,
	0x15, 2, 0x23, 0x00,
	0x15, 2, 0x24, 0x00,
	0x15, 2, 0x25, 0x00,
	0x15, 2, 0x26, 0x00,
	0x15, 2, 0x27, 0x00,
	0x15, 2, 0x28, 0x33,
	0x15, 2, 0x29, 0x02,
	0x15, 2, 0x2A, 0x00,
	0x15, 2, 0x2B, 0x00,
	0x15, 2, 0x2C, 0x00,
	0x15, 2, 0x2D, 0x00,
	0x15, 2, 0x2E, 0x00,
	0x15, 2, 0x2F, 0x00,
	0x15, 2, 0x30, 0x00,
	0x15, 2, 0x31, 0x00,
	0x15, 2, 0x32, 0x00,
	0x15, 2, 0x33, 0x00,
	0x15, 2, 0x34, 0x04,
	0x15, 2, 0x35, 0x00,
	0x15, 2, 0x36, 0x00,
	0x15, 2, 0x37, 0x00,
	0x15, 2, 0x38, 0x3C,
	0x15, 2, 0x39, 0x00,
	0x15, 2, 0x3A, 0x00,
	0x15, 2, 0x3B, 0x00,
	0x15, 2, 0x3C, 0x00,
	0x15, 2, 0x3D, 0x00,
	0x15, 2, 0x3E, 0x00,
	0x15, 2, 0x3F, 0x00,
	0x15, 2, 0x40, 0x00,
	0x15, 2, 0x41, 0x00,
	0x15, 2, 0x42, 0x00,
	0x15, 2, 0x43, 0x00,
	0x15, 2, 0x44, 0x00,

	0x15, 2, 0x50, 0x10,
	0x15, 2, 0x51, 0x32,
	0x15, 2, 0x52, 0x54,
	0x15, 2, 0x53, 0x76,
	0x15, 2, 0x54, 0x98,
	0x15, 2, 0x55, 0xBA,
	0x15, 2, 0x56, 0x10,
	0x15, 2, 0x57, 0x32,
	0x15, 2, 0x58, 0x54,
	0x15, 2, 0x59, 0x76,
	0x15, 2, 0x5A, 0x98,
	0x15, 2, 0x5B, 0xBA,
	0x15, 2, 0x5C, 0xDC,
	0x15, 2, 0x5D, 0xFE,
	0x15, 2, 0x5E, 0x00,
	0x15, 2, 0x5F, 0x0E,
	0x15, 2, 0x60, 0x0F,
	0x15, 2, 0x61, 0x0C,
	0x15, 2, 0x62, 0x0D,
	0x15, 2, 0x63, 0x06,
	0x15, 2, 0x64, 0x07,
	0x15, 2, 0x65, 0x02,
	0x15, 2, 0x66, 0x02,
	0x15, 2, 0x67, 0x02,
	0x15, 2, 0x68, 0x02,
	0x15, 2, 0x69, 0x01,
	0x15, 2, 0x6A, 0x00,
	0x15, 2, 0x6B, 0x02,
	0x15, 2, 0x6C, 0x15,
	0x15, 2, 0x6D, 0x14,
	0x15, 2, 0x6E, 0x02,
	0x15, 2, 0x6F, 0x02,
	0x15, 2, 0x70, 0x02,
	0x15, 2, 0x71, 0x02,
	0x15, 2, 0x72, 0x02,
	0x15, 2, 0x73, 0x02,
	0x15, 2, 0x74, 0x02,
	0x15, 2, 0x75, 0x0E,
	0x15, 2, 0x76, 0x0F,
	0x15, 2, 0x77, 0x0C,
	0x15, 2, 0x78, 0x0D,
	0x15, 2, 0x79, 0x06,
	0x15, 2, 0x7A, 0x07,
	0x15, 2, 0x7B, 0x02,
	0x15, 2, 0x7C, 0x02,
	0x15, 2, 0x7D, 0x02,
	0x15, 2, 0x7E, 0x02,
	0x15, 2, 0x7F, 0x01,
	0x15, 2, 0x80, 0x00,
	0x15, 2, 0x81, 0x02,
	0x15, 2, 0x82, 0x14,
	0x15, 2, 0x83, 0x15,
	0x15, 2, 0x84, 0x02,
	0x15, 2, 0x85, 0x02,
	0x15, 2, 0x86, 0x02,
	0x15, 2, 0x87, 0x02,
	0x15, 2, 0x88, 0x02,
	0x15, 2, 0x89, 0x02,
	0x15, 2, 0x8A, 0x02,

	0x39, 4, 0xFF, 0x98, 0x81, 0x04,
	0x15, 2, 0x6C, 0x15,
	0x15, 2, 0x6E, 0x2A,
	0x15, 2, 0x6F, 0x33,  //33
	0x15, 2, 0x3A, 0x94,
	0x15, 2, 0x8D, 0x14,
	0x15, 2, 0x87, 0xBA,
	0x15, 2, 0x26, 0x76,
	0x15, 2, 0xB2, 0xD1,
	0x15, 2, 0xB5, 0x06,

	0x39, 4, 0xFF, 0x98, 0x81, 0x01,
	0x15, 2, 0x22, 0x02, //xiugai RGB
	0x15, 2, 0x31, 0x00, //dot inv
	//0x15, 2, 0x52, 0x00,
	0x15, 2, 0x53, 0x72, //vcom
	//0x15, 2, 0x54, 0x00, //vcom
	0x15, 2, 0x55, 0x88,

	0x15, 2, 0x40, 0x33,

	0x15, 2, 0x50, 0x96,
	0x15, 2, 0x51, 0x96,

	0x15, 2, 0x60, 0x08,

	0x15, 2, 0xA0, 0x08,       //GAMMA P
	0x15, 2, 0xA1, 0x1D,
	0x15, 2, 0xA2, 0x2A,
	0x15, 2, 0xA3, 0x10,
	0x15, 2, 0xA4, 0x15,
	0x15, 2, 0xA5, 0x28,
	0x15, 2, 0xA6, 0x1C,
	0x15, 2, 0xA7, 0x1D,
	0x15, 2, 0xA8, 0x7E,
	0x15, 2, 0xA9, 0x1D,
	0x15, 2, 0xAA, 0x29,
	0x15, 2, 0xAB, 0x6B,
	0x15, 2, 0xAC, 0x1A,
	0x15, 2, 0xAD, 0x18,
	0x15, 2, 0xAE, 0x4B,
	0x15, 2, 0xAF, 0x20,
	0x15, 2, 0xB0, 0x27,
	0x15, 2, 0xB1, 0x50,
	0x15, 2, 0xB2, 0x64,
	0x15, 2, 0xB3, 0x39,

	0x15, 2, 0xC0, 0x08,         //GAMMA N
	0x15, 2, 0xC1, 0x1D,
	0x15, 2, 0xC2, 0x2A,
	0x15, 2, 0xC3, 0x10,
	0x15, 2, 0xC4, 0x15,
	0x15, 2, 0xC5, 0x28,
	0x15, 2, 0xC6, 0x1C,
	0x15, 2, 0xC7, 0x1D,
	0x15, 2, 0xC8, 0x7E,
	0x15, 2, 0xC9, 0x1D,
	0x15, 2, 0xCA, 0x29,
	0x15, 2, 0xCB, 0x6B,
	0x15, 2, 0xCC, 0x1A,
	0x15, 2, 0xCD, 0x18,
	0x15, 2, 0xCE, 0x4B,
	0x15, 2, 0xCF, 0x20,
	0x15, 2, 0xD0, 0x27,
	0x15, 2, 0xD1, 0x50,
	0x15, 2, 0xD2, 0x64,
	0x15, 2, 0xD3, 0x39,

	0x39, 4, 0xFF, 0x98, 0x81, 0x00,

	0x15, 2, 0x3A, 0x77,
	0xfd, 1, 2,

	0x15, 2, 0x36, 0x08,

	0x05, 1, 0x11,  //display on
	0xfd, 1, 200,

	0x05, 1, 0x29, //display on
	0xfd, 1, 200,
	0xFF, 0,   /* ending flag */
};

static unsigned char ext_init_off_table_TL070HDV03CT[LCD_EXTERN_INIT_OFF_MAX] = {
	0x05, 1, 0x28, /* display off */
	0xfd, 1, 10,      /* delay 10ms */
	0x05, 1, 0x10, /* sleep in */
	0xfd, 1, 150,      /* delay 150ms */
	0xFF, 0,   /* ending flag */
};

static unsigned char ext_init_on_table_P070ACB_FT[LCD_EXTERN_INIT_ON_MAX] = {
	0x23,2,0xE0,0x00,//Page 0
	0x23,2,0xE1,0x93,// PASSWORD
	0x23,2,0xE2,0x65,
	0x23,2,0xE3,0xF8,
	0x23,2,0x80,0x03,
	0x23,2,0xE0,0x01,//Page 01
	0x23,2,0x0C,0x74,//Set PWRIC
	0x23,2,0x17,0x00,//Set Gamma Power
	0x23,2,0x18,0xEF,//VGMP=5.1V
	0x23,2,0x19,0x00,
	0x23,2,0x1A,0x00,
	0x23,2,0x1B,0xEF,//VGMN=-5.1V
	0x23,2,0x1C,0x00,
	0x23,2,0x1F,0x70,//Set Gate Power
	0x23,2,0x20,0x2D,
	0x23,2,0x21,0x2D,
	0x23,2,0x22,0x7E,
	0x23,2,0x26,0xF3,//VDDD from IOVCC
	0x23,2,0x37,0x09,//SetPanel
	0x23,2,0x38,0x04,//SET RGBCYC
	0x23,2,0x39,0x00,
	0x23,2,0x3A,0x01,
	0x23,2,0x3C,0x90,
	0x23,2,0x3D,0xFF,
	0x23,2,0x3E,0xFF,
	0x23,2,0x3F,0xFF,
	0x23,2,0x40,0x02,//Set TCON
	0x23,2,0x41,0x80,
	0x23,2,0x42,0x99,
	0x23,2,0x43,0x14,
	0x23,2,0x44,0x19,
	0x23,2,0x45,0x5A,
	0x23,2,0x4B,0x04,
	0x23,2,0x55,0x02,//power voltage
	0x23,2,0x56,0x01,
	0x23,2,0x57,0x69,
	0x23,2,0x58,0x0A,
	0x23,2,0x59,0x0A,
	0x23,2,0x5A,0x2E,//VGH = 16.2V
	0x23,2,0x5B,0x19,//VGL = -12V
	0x23,2,0x5C,0x15,
	0x23,2,0x5D,0x77,//Gamma
	0x23,2,0x5E,0x56,
	0x23,2,0x5F,0x45,
	0x23,2,0x60,0x38,
	0x23,2,0x61,0x35,
	0x23,2,0x62,0x27,
	0x23,2,0x63,0x2D,
	0x23,2,0x64,0x18,
	0x23,2,0x65,0x33,
	0x23,2,0x66,0x34,
	0x23,2,0x67,0x35,
	0x23,2,0x68,0x56,
	0x23,2,0x69,0x45,
	0x23,2,0x6A,0x4F,
	0x23,2,0x6B,0x42,
	0x23,2,0x6C,0x40,
	0x23,2,0x6D,0x34,
	0x23,2,0x6E,0x25,
	0x23,2,0x6F,0x02,
	0x23,2,0x70,0x77,
	0x23,2,0x71,0x56,
	0x23,2,0x72,0x45,
	0x23,2,0x73,0x38,
	0x23,2,0x74,0x35,
	0x23,2,0x75,0x27,
	0x23,2,0x76,0x2D,
	0x23,2,0x77,0x18,
	0x23,2,0x78,0x33,
	0x23,2,0x79,0x34,
	0x23,2,0x7A,0x35,
	0x23,2,0x7B,0x56,
	0x23,2,0x7C,0x45,
	0x23,2,0x7D,0x4F,
	0x23,2,0x7E,0x42,
	0x23,2,0x7F,0x40,
	0x23,2,0x80,0x34,
	0x23,2,0x81,0x25,
	0x23,2,0x82,0x02,
	0x23,2,0xE0,0x02,//Page2
	0x23,2,0x00,0x53,//GIP_L Pin mapping RESET_EVEN
	0x23,2,0x01,0x55,//VSSG_EVEN
	0x23,2,0x02,0x55,//VSSA_EVEN
	0x23,2,0x03,0x51,//STV2_EVEN
	0x23,2,0x04,0x77,//VDD2_EVEN
	0x23,2,0x05,0x57,//VDD1_EVEN
	0x23,2,0x06,0x1F,
	0x23,2,0x07,0x4F,     //CK12
	0x23,2,0x08,0x4D,      //CK10
	0x23,2,0x09,0x1F,
	0x23,2,0x0A,0x4B,     //CK8
	0x23,2,0x0B,0x49,     //CK6
	0x23,2,0x0C,0x1F,
	0x23,2,0x0D,0x47,       //CK4
	0x23,2,0x0E,0x45,       //CK2
	0x23,2,0x0F,0x41, //STV1_EVEN
	0x23,2,0x10,0x1F,
	0x23,2,0x11,0x1F,
	0x23,2,0x12,0x1F,
	0x23,2,0x13,0x55,      //VGG
	0x23,2,0x14,0x1F,
	0x23,2,0x15,0x1F,
	0x23,2,0x16,0x52,//GIP_R Pin mapping RESET_ODD
	0x23,2,0x17,0x55, //VSSG_ODD
	0x23,2,0x18,0x55, //VSSA_ODD
	0x23,2,0x19,0x50, //STV2_ODD
	0x23,2,0x1A,0x77,//VDD2_ODD
	0x23,2,0x1B,0x57,//VDD1_ODD
	0x23,2,0x1C,0x1F,
	0x23,2,0x1D,0x4E,     //CK11
	0x23,2,0x1E,0x4C,      //CK9
	0x23,2,0x1F,0x1F,
	0x23,2,0x20,0x4A,      //CK7
	0x23,2,0x21,0x48,      //CK5
	0x23,2,0x22,0x1F,
	0x23,2,0x23,0x46,     //CK3
	0x23,2,0x24,0x44,      //CK1
	0x23,2,0x25,0x40,//STV1_ODD
	0x23,2,0x26,0x1F,
	0x23,2,0x27,0x1F,
	0x23,2,0x28,0x1F,
	0x23,2,0x29,0x1F,
	0x23,2,0x2A,0x1F,
	0x23,2,0x2B,0x55,      //VGG
	0x23,2,0x2C,0x12,//GIP_L_GS Pin mapping
	0x23,2,0x2D,0x15,
	0x23,2,0x2E,0x15,
	0x23,2,0x2F,0x00,
	0x23,2,0x30,0x37,
	0x23,2,0x31,0x17,
	0x23,2,0x32,0x1F,
	0x23,2,0x33,0x08,
	0x23,2,0x34,0x0A,
	0x23,2,0x35,0x1F,
	0x23,2,0x36,0x0C,
	0x23,2,0x37,0x0E,
	0x23,2,0x38,0x1F,
	0x23,2,0x39,0x04,
	0x23,2,0x3A,0x06,
	0x23,2,0x3B,0x10,
	0x23,2,0x3C,0x1F,
	0x23,2,0x3D,0x1F,
	0x23,2,0x3E,0x1F,
	0x23,2,0x3F,0x15,
	0x23,2,0x40,0x1F,
	0x23,2,0x41,0x1F,
	0x23,2,0x42,0x13,//GIP_R_GS Pin mapping
	0x23,2,0x43,0x15,
	0x23,2,0x44,0x15,
	0x23,2,0x45,0x01,
	0x23,2,0x46,0x37,
	0x23,2,0x47,0x17,
	0x23,2,0x48,0x1F,
	0x23,2,0x49,0x09,
	0x23,2,0x4A,0x0B,
	0x23,2,0x4B,0x1F,
	0x23,2,0x4C,0x0D,
	0x23,2,0x4D,0x0F,
	0x23,2,0x4E,0x1F,
	0x23,2,0x4F,0x05,
	0x23,2,0x50,0x07,
	0x23,2,0x51,0x11,
	0x23,2,0x52,0x1F,
	0x23,2,0x53,0x1F,
	0x23,2,0x54,0x1F,
	0x23,2,0x55,0x1F,
	0x23,2,0x56,0x1F,
	0x23,2,0x57,0x15,
	0x23,2,0x58,0x40,//GIP Timing
	0x23,2,0x59,0x00,
	0x23,2,0x5A,0x00,
	0x23,2,0x5B,0x10,
	0x23,2,0x5C,0x14,
	0x23,2,0x5D,0x40,
	0x23,2,0x5E,0x01,
	0x23,2,0x5F,0x02,
	0x23,2,0x60,0x40,
	0x23,2,0x61,0x03,
	0x23,2,0x62,0x04,
	0x23,2,0x63,0x7A,
	0x23,2,0x64,0x7A,
	0x23,2,0x65,0x74,
	0x23,2,0x66,0x16,
	0x23,2,0x67,0xB4,
	0x23,2,0x68,0x16,
	0x23,2,0x69,0x7A,
	0x23,2,0x6A,0x7A,
	0x23,2,0x6B,0x0C,
	0x23,2,0x6C,0x00,
	0x23,2,0x6D,0x04,
	0x23,2,0x6E,0x04,
	0x23,2,0x6F,0x88,
	0x23,2,0x70,0x00,
	0x23,2,0x71,0x00,
	0x23,2,0x72,0x06,
	0x23,2,0x73,0x7B,
	0x23,2,0x74,0x00,
	0x23,2,0x75,0xBC,
	0x23,2,0x76,0x00,
	0x23,2,0x77,0x04,
	0x23,2,0x78,0x2C,
	0x23,2,0x79,0x00,
	0x23,2,0x7A,0x00,
	0x23,2,0x7B,0x00,
	0x23,2,0x7C,0x00,
	0x23,2,0x7D,0x03,
	0x23,2,0x7E,0x7B,
	0x23,2,0xE0,0x04,//Page4
	0x23,2,0x09,0x11,//Set RGBCYC2
	0x23,2,0x0E,0x48,
	0x23,2,0x2B,0x2B,//ESD Protect
	0x23,2,0x2E,0x44,
	0x23,2,0xE0,0x00,//Page0
	0x23,2,0xE6,0x02,//Watch dog
	0x23,2,0xE7,0x0C,
	0x05,1,0x11,//sleep out
	0xfd, 1,120,
	0x05,1,0x29,//display on
	0x05,1,0x35,
	0xfd, 1, 20,   /* delay(ms) */
	0xFF, 0,   /* ending flag */
};

static unsigned char ext_init_off_table_P070ACB_FT[LCD_EXTERN_INIT_OFF_MAX] = {
	0x05, 1, 0x28, /* display off */
	0xfd, 1, 10,   /* delay 10ms */
	0x05, 1, 0x10, /* sleep in */
	0xfd, 1, 150,  /* delay 150ms */
	0xFF, 0,   /* ending flag */
};

#endif

