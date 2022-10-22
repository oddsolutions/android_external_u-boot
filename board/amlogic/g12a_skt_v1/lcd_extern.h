/* SPDX-License-Identifier: (GPL-2.0+ OR MIT) */
/*
 * board/amlogic/g12a_skt_v1/lcd_extern.h
 *
 * Copyright (C) 2020 Amlogic, Inc. All rights reserved.
 *
 */

#ifndef _DFT_LCD_EXTERN_H_
#define _DFT_LCD_EXTERN_H_

static unsigned char ext_init_on_table_TV070WSM[LCD_EXTERN_INIT_ON_MAX] = {
	0xfd, 1, 100,   /* delay */
	0x15, 2, 0x62, 0x01,
	0x39, 5, 0xff, 0xaa, 0x55, 0x25, 0x01,
	0x15, 2, 0xfc, 0x08,
	0xfd, 1, 1,   /* delay */
	0x15, 2, 0xfc, 0x00,
	0x39, 5, 0xff, 0xaa, 0x55, 0x25, 0x00,
	0xfd, 1, 20,   /* delay */
	0x39, 6, 0xf0, 0x55, 0xaa, 0x52, 0x08, 0x00,
	0x39, 3, 0xb1, 0x68, 0x41,
	0x15, 2, 0xb5, 0x88,
	0x15, 2, 0xb6, 0x0f,
	0x39, 5, 0xb8, 0x01, 0x01, 0x12, 0x01,
	0x39, 3, 0xbb, 0x11, 0x11,
	0x39, 3, 0xbc, 0x05, 0x05,
	0x15, 2, 0xc7, 0x03,
	0x39, 6, 0xbd, 0x03, 0x02, 0x19, 0x17, 0x00,
	0x15, 2, 0xc8, 0x80,
	0x39, 6, 0xf0, 0x55, 0xaa, 0x52, 0x08, 0x01,
	0x39, 3, 0xB2, 0x01, 0x01,
	0x39, 3, 0xB3, 0x28, 0x28,
	0x39, 3, 0xB4, 0x14, 0x14,
	0x39, 3, 0xB8, 0x05, 0x05,
	0x39, 3, 0xB9, 0x45, 0x45,
	0x39, 3, 0xBA, 0x25, 0x25,
	0x39, 3, 0xBC, 0x88, 0x00,
	0x39, 3, 0xBD, 0x88, 0x00,
	0x39, 6, 0xF0, 0x55, 0xAA, 0x52, 0x08, 0x02,
	0x15, 2, 0xEE, 0x00,
	0x39, 17, 0xB0, 0x00, 0x4B, 0x00, 0x5C, 0x00, 0x79, 0x00, 0x94, 0x00, 0xA6, 0x00, 0xD8, 0x00, 0xF2, 0x01, 0x19,
	0x39, 17, 0xB1, 0x01, 0x39, 0x01, 0x77, 0x01, 0xA2, 0x01, 0xF2, 0x02, 0x32, 0x02, 0x34, 0x02, 0x6D, 0x02, 0xA2,
	0x39, 17, 0xB2, 0x02, 0xC7, 0x02, 0xF2, 0x03, 0x18, 0x03, 0x43, 0x03, 0x65, 0x03, 0x86, 0x03, 0x8F, 0x03, 0x94,
	0x39, 5, 0xB3, 0x03, 0x96, 0x03, 0x98,
	0x39, 17, 0xB4, 0x00, 0x84, 0x00, 0x91, 0x00, 0xA4, 0x00, 0xB6, 0x00, 0xCA, 0x00, 0xE9, 0x01, 0x02, 0x01, 0x2A,
	0x39, 17, 0xB5, 0x01, 0x49, 0x01, 0x82, 0x01, 0xAF, 0x01, 0xF7, 0x02, 0x36, 0x02, 0x38, 0x02, 0x70, 0x02, 0xA6,
	0x39, 17, 0xB6, 0x02, 0xC8, 0x02, 0xF5, 0x03, 0x1A, 0x03, 0x43, 0x03, 0x62, 0x03, 0x82, 0x03, 0x8F, 0x03, 0x94,
	0x39, 5, 0xB7, 0x03, 0x96, 0x03, 0x98,
	0x39, 17, 0xB8, 0x01, 0x22, 0x01, 0x27, 0x01, 0x2E, 0x01, 0x38, 0x01, 0x40, 0x01, 0x53, 0x01, 0x60, 0x01, 0x7B,
	0x39, 17, 0xB9, 0x01, 0x8C, 0x01, 0xB5, 0x01, 0xD3, 0x02, 0x11, 0x02, 0x49, 0x02, 0x4A, 0x02, 0x7F, 0x02, 0xB1,
	0x39, 17, 0xBA, 0x02, 0xD1, 0x03, 0x00, 0x03, 0x22, 0x03, 0x49, 0x03, 0x60, 0x03, 0x7A, 0x03, 0x8B, 0x03, 0x8F,
	0x39, 5, 0xBB, 0x03, 0x93, 0x03, 0x9A,
	0x39, 17, 0xBC, 0x00, 0x37, 0x00, 0x48, 0x00, 0x65, 0x00, 0x80, 0x00, 0x92, 0x00, 0xC4, 0x00, 0xDE, 0x01, 0x05,
	0x39, 17, 0xBD, 0x01, 0x31, 0x01, 0x6F, 0x01, 0x9E, 0x01, 0xEE, 0x02, 0x32, 0x02, 0x34, 0x02, 0x71, 0x02, 0xA7,
	0x39, 17, 0xBE, 0x02, 0xD3, 0x02, 0xFE, 0x03, 0x24, 0x03, 0x4F, 0x03, 0x71, 0x03, 0x92, 0x03, 0x9B, 0x03, 0xA0,
	0x39, 5, 0xBF, 0x03, 0xA6, 0x03, 0xA8,
	0x39, 17, 0xC0, 0x00, 0x70, 0x00, 0x7D, 0x00, 0x90, 0x00, 0xA4, 0x00, 0xB6, 0x00, 0xD5, 0x00, 0xEE, 0x01, 0x16,
	0x39, 17, 0xC1, 0x01, 0x41, 0x01, 0x7A, 0x01, 0xAB, 0x01, 0xF3, 0x02, 0x36, 0x02, 0x38, 0x02, 0x74, 0x02, 0xAA,
	0x39, 17, 0xC2, 0x02, 0xD4, 0x03, 0x01, 0x03, 0x26, 0x03, 0x4F, 0x03, 0x6E, 0x03, 0x8E, 0x03, 0x9B, 0x03, 0xA0,
	0x39, 5, 0xC3, 0x03, 0xA6, 0x03, 0xA8,
	0x39, 17, 0xC4, 0x01, 0x0E, 0x01, 0x13, 0x01, 0x1A, 0x01, 0x24, 0x01, 0x2C, 0x01, 0x3F, 0x01, 0x4C, 0x01, 0x67,
	0x39, 17, 0xC5, 0x01, 0x84, 0x01, 0xAD, 0x01, 0xCF, 0x02, 0x0D, 0x02, 0x49, 0x02, 0x4A, 0x02, 0x83, 0x02, 0xB5,
	0x39, 17, 0xC6, 0x02, 0xDD, 0x03, 0x0C, 0x03, 0x2E, 0x03, 0x55, 0x03, 0x6B, 0x03, 0x86, 0x03, 0x97, 0x03, 0x9B,
	0x39, 5, 0xC7, 0x03, 0xA1, 0x03, 0xA8,
	0x39, 6, 0xF0, 0x55, 0xAA, 0x52, 0x08, 0x04,
	0x39, 6, 0xB1, 0x03, 0x02, 0x02, 0x02, 0x00,
	0x39, 6, 0xF0, 0x55, 0xAA, 0x52, 0x08, 0x06,
	0x39, 3, 0xB0, 0x11, 0x11,
	0x39, 3, 0xB1, 0x13, 0x13,
	0x39, 3, 0xB2, 0x03, 0x03,
	0x39, 3, 0xB3, 0x34, 0x34,
	0x39, 3, 0xB4, 0x34, 0x34,
	0x39, 3, 0xB5, 0x34, 0x34,
	0x39, 3, 0xB6, 0x34, 0x34,
	0x39, 3, 0xB7, 0x34, 0x34,
	0x39, 3, 0xB8, 0x34, 0x34,
	0x39, 3, 0xB9, 0x34, 0x34,
	0x39, 3, 0xBA, 0x34, 0x34,
	0x39, 3, 0xBB, 0x34, 0x34,
	0x39, 3, 0xBC, 0x34, 0x34,
	0x39, 3, 0xBD, 0x34, 0x34,
	0x39, 3, 0xBE, 0x34, 0x34,
	0x39, 3, 0xBF, 0x34, 0x34,
	0x39, 3, 0xC0, 0x34, 0x34,
	0x39, 3, 0xC1, 0x02, 0x02,
	0x39, 3, 0xC2, 0x12, 0x12,
	0x39, 3, 0xC3, 0x10, 0x10,
	0x39, 3, 0xE5, 0x34, 0x34,
	0x39, 6, 0xD8, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x39, 6, 0xD9, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x39, 6, 0xF0, 0x55, 0xAA, 0x52, 0x08, 0x05,
	0x15, 2, 0xC0, 0x03,
	0x15, 2, 0xC1, 0x02,
	0x39, 3, 0xC8, 0x01, 0x20,
	0x15, 2, 0xE5, 0x03,
	0x15, 2, 0xE6, 0x03,
	0x15, 2, 0xE7, 0x03,
	0x15, 2, 0xE8, 0x03,
	0x15, 2, 0xE9, 0x03,
	0x39, 5, 0xD1, 0x03, 0x00, 0x3D, 0x00,
	0x39, 6, 0xF0, 0x55, 0xAA, 0x52, 0x08, 0x03,
	0x39, 3, 0xB0, 0x11, 0x00,
	0x39, 3, 0xB1, 0x11, 0x00,
	0x39, 6, 0xB2, 0x03, 0x00, 0x00, 0x00, 0x00,
	0x39, 6, 0xB3, 0x03, 0x00, 0x00, 0x00, 0x00,
	0x39, 6, 0xBA, 0x31, 0x00, 0x00, 0x00, 0x00,
	0x15, 2, 0x35, 0x00,
	0x15, 2, 0x51, 0xFF,
	0x15, 2, 0x53, 0x2C,
	0x15, 2, 0x55, 0x03,
	0x05, 1, 0x11,
	0xfd, 1, 120,  /* delay 120ms */
	0x05, 1, 0x29,
	0xff, 0, /* ending flag */
};

static unsigned char ext_init_off_table_TV070WSM[LCD_EXTERN_INIT_OFF_MAX] = {
	0x05, 1, 0x28, /* display off */
	0xfd, 1, 30,   /* delay 30ms */
	0x05, 1, 0x10, /* sleep in */
	0xfd, 1, 10,
	0xff, 0,   /* ending flag */
};

static unsigned char ext_init_on_table_P070ACB[LCD_EXTERN_INIT_ON_MAX] = {
	0xfd, 1, 100,   /* delay */
	0x15, 2, 0x62, 0x01,
	0x29, 5, 0xFF, 0xAA, 0x55, 0x25, 0x01,
	0x23, 2, 0xFC, 0x08,
	0xfd, 1, 1,	   /* delay(ms) */
	0x23, 2, 0xFC, 0x00,

	0xfd, 1, 1,	   /* delay(ms) */
	0x23, 2, 0x6F, 0x21,
	0x23, 2, 0xF7, 0x01,
	0xfd, 1, 1,	   /* delay(ms) */
	0x23, 2, 0x6F, 0x21,
	0x23, 2, 0xF7, 0x00,
	0xfd, 1, 1,	   /* delay(ms) */

	0x23, 2, 0x6F, 0x1A,
	0x23, 2, 0xF7, 0x05,
	0xfd, 1, 1,	   /* delay(ms) */

	0x29, 5, 0xFF, 0xAA, 0x55, 0x25, 0x00,

	0x29, 6, 0xF0, 0x55, 0xAA, 0x52, 0x08, 0x00,
	0x29, 3, 0xB1, 0x68, 0x41,
	0x23, 2, 0xB5, 0x88,
	0x29, 6, 0xBD, 0x02, 0xB0, 0x0C, 0x14, 0x00,
	0x23, 2, 0xC8, 0x80,

	0x29, 6, 0xF0, 0x55, 0xAA, 0x52, 0x08, 0x01,
	0x29, 3, 0xB3, 0x2D, 0x2D,
	0x29, 3, 0xB4, 0x19, 0x19,
	0x23, 2, 0xB5, 0x06,

	0x29, 3, 0xB9, 0x36, 0x36,
	0x29, 3, 0xBA, 0x26, 0x26,
	0x29, 3, 0xBC, 0xA8, 0x01,
	0x29, 3, 0xBD, 0xAB, 0x01,
	0x23, 2, 0xC0, 0x0C,

	0x29, 6, 0xF0, 0x55, 0xAA, 0x52, 0x08, 0x02,
	0x23, 2, 0xEE, 0x02,
	0x29, 7, 0xB0, 0x00, 0x50, 0x00, 0x52, 0x00, 0x73,
	0x23, 2, 0x6F, 0x06,
	0x29, 7, 0xB0, 0x00, 0x8F, 0x00, 0xA5, 0x00, 0xCA,
	0x23, 2, 0x6F, 0x0C,
	0x29, 5, 0xB0, 0x00, 0xEA, 0x01, 0x1B,
	0x29, 7, 0xB1, 0x01, 0x42, 0x01, 0x82, 0x01, 0xB3,
	0x23, 2, 0x6F, 0x06,
	0x29, 7, 0xB1, 0x02, 0x00, 0x02, 0x41, 0x02, 0x42,
	0x23, 2, 0x6F, 0x0C,
	0x29, 5, 0xB1, 0x02, 0x78, 0x02, 0xB5,
	0x29, 7, 0xB2, 0x02, 0xDA, 0x03, 0x12, 0x03, 0x3A,
	0x23, 2, 0x6F, 0x06,
	0x29, 7, 0xB2, 0x03, 0x6E, 0x03, 0x8D, 0x03, 0xB1,
	0x23, 2, 0x6F, 0x0C,
	0x29, 5, 0xB2, 0x03, 0xCA, 0x03, 0xE8,
	0x29, 5, 0xB3, 0x03, 0xF4, 0x03, 0xFF,

	0x29, 7, 0xBC, 0x00, 0x05, 0x00, 0x52, 0x00, 0x73,
	0x23, 2, 0x6F, 0x06,
	0x29, 7, 0xBC, 0x00, 0x8F, 0x00, 0xA5, 0x00, 0xCA,
	0x23, 2, 0x6F, 0x0C,
	0x29, 5, 0xBC, 0x00, 0xEA, 0x01, 0x1B,
	0x29, 7, 0xBD, 0x01, 0x42, 0x01, 0x82, 0x01, 0xB3,
	0x23, 2, 0x6F, 0x06,
	0x29, 7, 0xBD, 0x02, 0x00, 0x02, 0x41, 0x02, 0x42,
	0x23, 2, 0x6F, 0x0C,
	0x29, 5, 0xBD, 0x02, 0x78, 0x02, 0xB5,
	0x29, 7, 0xBE, 0x02, 0xDA, 0x03, 0x12, 0x03, 0x3A,
	0x23, 2, 0x6F, 0x06,
	0x29, 7, 0xBE, 0x03, 0x6E, 0x03, 0x8D, 0x03, 0xB1,
	0x23, 2, 0x6F, 0x0C,
	0x29, 5, 0xBE, 0x03, 0xCA, 0x03, 0xE8,
	0x29, 5, 0xBF, 0x03, 0xF4, 0x03, 0xFF,

	0x29, 6, 0xF0, 0x55, 0xAA, 0x52, 0x08, 0x03,
	0x29, 6, 0xB2, 0x05, 0x00, 0x00, 0x00, 0x00,
	0x29, 6, 0xB6, 0x05, 0x00, 0x00, 0x00, 0x00,
	0x29, 6, 0xB7, 0x05, 0x00, 0x00, 0x00, 0x00,
	0x29, 6, 0xBA, 0x57, 0x00, 0x00, 0x00, 0x00,
	0x29, 6, 0xBB, 0x57, 0x00, 0x00, 0x00, 0x00,
	0x29, 5, 0xC0, 0x00, 0x34, 0x00, 0x00,
	0x29, 5, 0xC1, 0x00, 0x00, 0x34, 0x00,
	0x23, 2, 0xC4, 0x40,

	0x29, 6, 0xF0, 0x55, 0xAA, 0x52, 0x08, 0x05,
	0x29, 3, 0xB0, 0x17, 0x06,
	0x29, 3, 0xB1, 0x17, 0x06,
	0x29, 3, 0xB2, 0x17, 0x06,
	0x29, 3, 0xB3, 0x17, 0x06,
	0x29, 3, 0xB4, 0x17, 0x06,

	0x29, 6, 0xBD, 0x03, 0x01, 0x03, 0x03, 0x01,
	0x23, 2, 0xC0, 0x05,
	0x23, 2, 0xC4, 0x82,
	0x23, 2, 0xC5, 0xA2,
	0x29, 3, 0xC8, 0x03, 0x30,
	0x29, 3, 0xC9, 0x03, 0x31,
	0x29, 4, 0xCC, 0x00, 0x00, 0x3C,
	0x29, 4, 0xCD, 0x00, 0x00, 0x3C,
	0x29, 6, 0xD1, 0x00, 0x44, 0x09, 0x00, 0x00,
	0x29, 6, 0xD2, 0x00, 0x04, 0x0B, 0x00, 0x00,

	0x29, 6, 0xF0, 0x55, 0xAA, 0x52, 0x08, 0x06,
	0x29, 3, 0xB0, 0x0B, 0x2D,
	0x29, 3, 0xB1, 0x2D, 0x09,
	0x29, 3, 0xB2, 0x2A, 0x29,
	0x29, 3, 0xB3, 0x34, 0x1B,
	0x29, 3, 0xB4, 0x19, 0x17,
	0x29, 3, 0xB5, 0x15, 0x13,
	0x29, 3, 0xB6, 0x11, 0x01,
	0x29, 3, 0xB7, 0x34, 0x34,
	0x29, 3, 0xB8, 0x34, 0x2D,
	0x29, 3, 0xB9, 0x2D, 0x34,
	0x29, 3, 0xBA, 0x2D, 0x2D,
	0x29, 3, 0xBB, 0x34, 0x34,
	0x29, 3, 0xBC, 0x34, 0x34,
	0x29, 3, 0xBD, 0x00, 0x10,
	0x29, 3, 0xBE, 0x12, 0x14,
	0x29, 3, 0xBF, 0x16, 0x18,

	0x29, 3, 0xC0, 0x1A, 0x34,
	0x29, 3, 0xC1, 0x29, 0x2A,
	0x29, 3, 0xC2, 0x08, 0x2D,
	0x29, 3, 0xC3, 0x2D, 0x0A,
	0x29, 3, 0xC4, 0x0A, 0x2D,
	0x29, 3, 0xC5, 0x2D, 0x00,
	0x29, 3, 0xC6, 0x2A, 0x29,
	0x29, 3, 0xC7, 0x34, 0x14,
	0x29, 3, 0xC8, 0x16, 0x18,
	0x29, 3, 0xC9, 0x1A, 0x10,
	0x29, 3, 0xCA, 0x12, 0x08,
	0x29, 3, 0xCB, 0x34, 0x34,
	0x29, 3, 0xCC, 0x34, 0x2D,
	0x29, 3, 0xCD, 0x2D, 0x34,
	0x29, 3, 0xCE, 0x2D, 0x2D,
	0x29, 3, 0xCF, 0x34, 0x34,

	0x29, 3, 0xD0, 0x34, 0x34,
	0x29, 3, 0xD1, 0x09, 0x13,
	0x29, 3, 0xD2, 0x11, 0x1B,
	0x29, 3, 0xD3, 0x19, 0x17,
	0x29, 3, 0xD4, 0x15, 0x34,
	0x29, 3, 0xD5, 0x29, 0x2A,
	0x29, 3, 0xD6, 0x01, 0x2D,
	0x29, 3, 0xD7, 0x2D, 0x0B,
	0x29, 6, 0xD8, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x29, 6, 0xD9, 0x00, 0x00, 0x00, 0x00, 0x00,

	0x29, 3, 0xE5, 0x34, 0x34,
	0x29, 3, 0xE6, 0x34, 0x34,
	0x23, 2, 0xE7, 0x00,
	0x29, 3, 0xE8, 0x34, 0x34,
	0x29, 3, 0xE9, 0x34, 0x34,
	0x23, 2, 0xEA, 0x00,

	0x29, 6, 0xF0, 0x55, 0xAA, 0x52, 0x00, 0x00,

	0x13, 1, 0x35,
	0x13, 1, 0x11,
	0xfd, 1, 120,	   /* delay(ms) */
	0x13, 1, 0x29,
	0xfd, 1, 20,	   /* delay(ms) */
	0xFF, 0,   /* ending flag */
};

static unsigned char ext_init_off_table_P070ACB[LCD_EXTERN_INIT_OFF_MAX] = {
	0x05, 1, 0x28, /* display off */
	0xfd, 1, 10,   /* delay 10ms */
	0x05, 1, 0x10, /* sleep in */
	0xfd, 1, 150,  /* delay 150ms */
	0xFF, 0,   /* ending flag */
};

static unsigned char ext_init_on_table_TL050FHV02CT[LCD_EXTERN_INIT_ON_MAX] = {
	//LCD driver initialization
	0x23, 2, 0XFF, 0X05,
	0x23, 2, 0XFB, 0X01,
	0x23, 2, 0XC5, 0X01, //TURN ON
	0xfd, 1, 100,

	//AUO4.97+NT35596_intial
	0x23, 2, 0XFF, 0XEE, //CMD page select
	0x23, 2, 0XFB, 0X01, //NON-RELOAD CMD
	0x23, 2, 0X1F, 0X45,
	0x23, 2, 0X24, 0X4F,
	0x23, 2, 0X38, 0XC8,
	0x23, 2, 0X39, 0X2C,
	0x23, 2, 0X1E, 0XBB,
	0x23, 2, 0X1D, 0X0F,
	0x23, 2, 0X7E, 0XB1,

	0x23, 2, 0XFF, 0X00, //CMD page select
	0x23, 2, 0XFB, 0X01, //NON-RELOAD CMD
	0x23, 2, 0X35, 0X01,

	0x23, 2, 0XFF, 0X01, //CMD page select
	0x23, 2, 0XFB, 0X01, //NON-RELOAD CMD
	0x23, 2, 0X00, 0X01,
	0x23, 2, 0X01, 0X55,
	0x23, 2, 0X02, 0X40,
	0x23, 2, 0X05, 0X40,
	0x23, 2, 0X06, 0X4A,
	0x23, 2, 0X07, 0X24,
	0x23, 2, 0X08, 0X0C,
	0x23, 2, 0X0B, 0X87,
	0x23, 2, 0X0C, 0X87,
	0x23, 2, 0X0E, 0XB0,
	0x23, 2, 0X0F, 0XB3,
	0x23, 2, 0X11, 0X10,
	0x23, 2, 0X12, 0X10,
	0x23, 2, 0X13, 0X05,
	0x23, 2, 0X14, 0X4A,
	0x23, 2, 0X15, 0X18,
	0x23, 2, 0X16, 0X18,
	0x23, 2, 0X18, 0X00,
	0x23, 2, 0X19, 0X77,
	0x23, 2, 0X1A, 0X55,
	0x23, 2, 0X1B, 0X13,
	0x23, 2, 0X1C, 0X00,
	0x23, 2, 0X1D, 0X00,
	0x23, 2, 0X1E, 0X13,
	0x23, 2, 0X1F, 0X00,
	0x23, 2, 0X23, 0X00,
	0x23, 2, 0X24, 0X00,
	0x23, 2, 0X25, 0X00,
	0x23, 2, 0X26, 0X00,
	0x23, 2, 0X27, 0X00,
	0x23, 2, 0X28, 0X00,
	0x23, 2, 0X35, 0X00,
	0x23, 2, 0X66, 0X00,
	0x23, 2, 0X58, 0X82,
	0x23, 2, 0X59, 0X02,
	0x23, 2, 0X5A, 0X02,
	0x23, 2, 0X5B, 0X02,
	0x23, 2, 0X5C, 0X82,
	0x23, 2, 0X5D, 0X82,
	0x23, 2, 0X5E, 0X02,
	0x23, 2, 0X5F, 0X02,
	0x23, 2, 0X72, 0X31,

	0x23, 2, 0XFF, 0X05, //CMD page select
	0x23, 2, 0XFB, 0X01, //NON-RELOAD CMD
	0x23, 2, 0X00, 0X01,
	0x23, 2, 0X01, 0X0B,
	0x23, 2, 0X02, 0X0C,
	0x23, 2, 0X03, 0X09,
	0x23, 2, 0X04, 0X0A,
	0x23, 2, 0X05, 0X00,
	0x23, 2, 0X06, 0X0F,
	0x23, 2, 0X07, 0X10,
	0x23, 2, 0X08, 0X00,
	0x23, 2, 0X09, 0X00,
	0x23, 2, 0X0A, 0X00,
	0x23, 2, 0X0B, 0X00,
	0x23, 2, 0X0C, 0X00,
	0x23, 2, 0X0D, 0X13,
	0x23, 2, 0X0E, 0X15,
	0x23, 2, 0X0F, 0X17,
	0x23, 2, 0X10, 0X01,
	0x23, 2, 0X11, 0X0B,
	0x23, 2, 0X12, 0X0C,
	0x23, 2, 0X13, 0X09,
	0x23, 2, 0X14, 0X0A,
	0x23, 2, 0X15, 0X00,
	0x23, 2, 0X16, 0X0F,
	0x23, 2, 0X17, 0X10,
	0x23, 2, 0X18, 0X00,
	0x23, 2, 0X19, 0X00,
	0x23, 2, 0X1A, 0X00,
	0x23, 2, 0X1B, 0X00,
	0x23, 2, 0X1C, 0X00,
	0x23, 2, 0X1D, 0X13,
	0x23, 2, 0X1E, 0X15,
	0x23, 2, 0X1F, 0X17,
	0x23, 2, 0X20, 0X00,
	0x23, 2, 0X21, 0X03,
	0x23, 2, 0X22, 0X01,
	0x23, 2, 0X23, 0X40,
	0x23, 2, 0X24, 0X40,
	0x23, 2, 0X25, 0XED,
	0x23, 2, 0X29, 0X58,
	0x23, 2, 0X2A, 0X12,
	0x23, 2, 0X2B, 0X01,
	0x23, 2, 0X4B, 0X06,
	0x23, 2, 0X4C, 0X11,
	0x23, 2, 0X4D, 0X20,
	0x23, 2, 0X4E, 0X02,
	0x23, 2, 0X4F, 0X02,
	0x23, 2, 0X50, 0X20,
	0x23, 2, 0X51, 0X61,
	0x23, 2, 0X52, 0X01,
	0x23, 2, 0X53, 0X63,
	0x23, 2, 0X54, 0X77,
	0x23, 2, 0X55, 0XED,
	0x23, 2, 0X5B, 0X00,
	0x23, 2, 0X5C, 0X00,
	0x23, 2, 0X5D, 0X00,
	0x23, 2, 0X5E, 0X00,
	0x23, 2, 0X5F, 0X15,
	0x23, 2, 0X60, 0X75,
	0x23, 2, 0X61, 0X00,
	0x23, 2, 0X62, 0X00,
	0x23, 2, 0X63, 0X00,
	0x23, 2, 0X64, 0X00,
	0x23, 2, 0X65, 0X00,
	0x23, 2, 0X66, 0X00,
	0x23, 2, 0X67, 0X00,
	0x23, 2, 0X68, 0X04,
	0x23, 2, 0X69, 0X00,
	0x23, 2, 0X6A, 0X00,
	0x23, 2, 0X6C, 0X40,
	0x23, 2, 0X75, 0X01,
	0x23, 2, 0X76, 0X01,
	0x23, 2, 0X7A, 0X80,
	0x23, 2, 0X7B, 0XC5,
	0x23, 2, 0X7C, 0XD8,
	0x23, 2, 0X7D, 0X60,
	0x23, 2, 0X7F, 0X15,
	0x23, 2, 0X80, 0X81,
	0x23, 2, 0X83, 0X05,
	0x23, 2, 0X93, 0X08,
	0x23, 2, 0X94, 0X10,
	0x23, 2, 0X8A, 0X00,
	0x23, 2, 0X9B, 0X0F,
	0x23, 2, 0XEA, 0XFF,
	0x23, 2, 0XEC, 0X00,

	0x23, 2, 0XFF, 0X01, //CMD page select
	0x23, 2, 0XFB, 0X01, //NON-RELOAD CMD
	0x23, 2, 0X75, 0X00, //Gamma R+
	0x23, 2, 0X76, 0X18,
	0x23, 2, 0X77, 0X00,
	0x23, 2, 0X78, 0X38,
	0x23, 2, 0X79, 0X00,
	0x23, 2, 0X7A, 0X65,
	0x23, 2, 0X7B, 0X00,
	0x23, 2, 0X7C, 0X84,
	0x23, 2, 0X7D, 0X00,
	0x23, 2, 0X7E, 0X9B,
	0x23, 2, 0X7F, 0X00,
	0x23, 2, 0X80, 0XAF,
	0x23, 2, 0X81, 0X00,
	0x23, 2, 0X82, 0XC1,
	0x23, 2, 0X83, 0X00,
	0x23, 2, 0X84, 0XD2,
	0x23, 2, 0X85, 0X00,
	0x23, 2, 0X86, 0XDF,
	0x23, 2, 0X87, 0X01,
	0x23, 2, 0X88, 0X11,
	0x23, 2, 0X89, 0X01,
	0x23, 2, 0X8A, 0X38,
	0x23, 2, 0X8B, 0X01,
	0x23, 2, 0X8C, 0X76,
	0x23, 2, 0X8D, 0X01,
	0x23, 2, 0X8E, 0XA7,
	0x23, 2, 0X8F, 0X01,
	0x23, 2, 0X90, 0XF3,
	0x23, 2, 0X91, 0X02,
	0x23, 2, 0X92, 0X2F,
	0x23, 2, 0X93, 0X02,
	0x23, 2, 0X94, 0X30,
	0x23, 2, 0X95, 0X02,
	0x23, 2, 0X96, 0X66,
	0x23, 2, 0X97, 0X02,
	0x23, 2, 0X98, 0XA0,
	0x23, 2, 0X99, 0X02,
	0x23, 2, 0X9A, 0XC5,
	0x23, 2, 0X9B, 0X02,
	0x23, 2, 0X9C, 0XF8,
	0x23, 2, 0X9D, 0X03,
	0x23, 2, 0X9E, 0X1B,
	0x23, 2, 0X9F, 0X03,
	0x23, 2, 0XA0, 0X46,
	0x23, 2, 0XA2, 0X03,
	0x23, 2, 0XA3, 0X52,
	0x23, 2, 0XA4, 0X03,
	0x23, 2, 0XA5, 0X62,
	0x23, 2, 0XA6, 0X03,
	0x23, 2, 0XA7, 0X71,
	0x23, 2, 0XA9, 0X03,
	0x23, 2, 0XAA, 0X83,
	0x23, 2, 0XAB, 0X03,
	0x23, 2, 0XAC, 0X94,
	0x23, 2, 0XAD, 0X03,
	0x23, 2, 0XAE, 0XA3,
	0x23, 2, 0XAF, 0X03,
	0x23, 2, 0XB0, 0XAD,
	0x23, 2, 0XB1, 0X03,
	0x23, 2, 0XB2, 0XCC,

	0x23, 2, 0XB3, 0X00, //Gamma R-
	0x23, 2, 0XB4, 0X18,
	0x23, 2, 0XB5, 0X00,
	0x23, 2, 0XB6, 0X38,
	0x23, 2, 0XB7, 0X00,
	0x23, 2, 0XB8, 0X65,
	0x23, 2, 0XB9, 0X00,
	0x23, 2, 0XBA, 0X84,
	0x23, 2, 0XBB, 0X00,
	0x23, 2, 0XBC, 0X9B,
	0x23, 2, 0XBD, 0X00,
	0x23, 2, 0XBE, 0XAF,
	0x23, 2, 0XBF, 0X00,
	0x23, 2, 0XC0, 0XC1,
	0x23, 2, 0XC1, 0X00,
	0x23, 2, 0XC2, 0XD2,
	0x23, 2, 0XC3, 0X00,
	0x23, 2, 0XC4, 0XDF,
	0x23, 2, 0XC5, 0X01,
	0x23, 2, 0XC6, 0X11,
	0x23, 2, 0XC7, 0X01,
	0x23, 2, 0XC8, 0X38,
	0x23, 2, 0XC9, 0X01,
	0x23, 2, 0XCA, 0X76,
	0x23, 2, 0XCB, 0X01,
	0x23, 2, 0XCC, 0XA7,
	0x23, 2, 0XCD, 0X01,
	0x23, 2, 0XCE, 0XF3,
	0x23, 2, 0XCF, 0X02,
	0x23, 2, 0XD0, 0X2F,
	0x23, 2, 0XD1, 0X02,
	0x23, 2, 0XD2, 0X30,
	0x23, 2, 0XD3, 0X02,
	0x23, 2, 0XD4, 0X66,
	0x23, 2, 0XD5, 0X02,
	0x23, 2, 0XD6, 0XA0,
	0x23, 2, 0XD7, 0X02,
	0x23, 2, 0XD8, 0XC5,
	0x23, 2, 0XD9, 0X02,
	0x23, 2, 0XDA, 0XF8,
	0x23, 2, 0XDB, 0X03,
	0x23, 2, 0XDC, 0X1B,
	0x23, 2, 0XDD, 0X03,
	0x23, 2, 0XDE, 0X46,
	0x23, 2, 0XDF, 0X03,
	0x23, 2, 0XE0, 0X52,
	0x23, 2, 0XE1, 0X03,
	0x23, 2, 0XE2, 0X62,
	0x23, 2, 0XE3, 0X03,
	0x23, 2, 0XE4, 0X71,
	0x23, 2, 0XE5, 0X03,
	0x23, 2, 0XE6, 0X83,
	0x23, 2, 0XE7, 0X03,
	0x23, 2, 0XE8, 0X94,
	0x23, 2, 0XE9, 0X03,
	0x23, 2, 0XEA, 0XA3,
	0x23, 2, 0XEB, 0X03,
	0x23, 2, 0XEC, 0XAD,
	0x23, 2, 0XED, 0X03,
	0x23, 2, 0XEE, 0XCC,

	0x23, 2, 0XEF, 0X00, //Gamma G+
	0x23, 2, 0XF0, 0X18,
	0x23, 2, 0XF1, 0X00,
	0x23, 2, 0XF2, 0X38,
	0x23, 2, 0XF3, 0X00,
	0x23, 2, 0XF4, 0X65,
	0x23, 2, 0XF5, 0X00,
	0x23, 2, 0XF6, 0X84,
	0x23, 2, 0XF7, 0X00,
	0x23, 2, 0XF8, 0X9B,
	0x23, 2, 0XF9, 0X00,
	0x23, 2, 0XFA, 0XAF,
	0x23, 2, 0XFF, 0X02, //CMD page select
	0x23, 2, 0XFB, 0X01, //NON-RELOAD CMD
	0x23, 2, 0X00, 0X00,
	0x23, 2, 0X01, 0XC1,
	0x23, 2, 0X02, 0X00,
	0x23, 2, 0X03, 0XD2,
	0x23, 2, 0X04, 0X00,
	0x23, 2, 0X05, 0XDF,
	0x23, 2, 0X06, 0X01,
	0x23, 2, 0X07, 0X11,
	0x23, 2, 0X08, 0X01,
	0x23, 2, 0X09, 0X38,
	0x23, 2, 0X0A, 0X01,
	0x23, 2, 0X0B, 0X76,
	0x23, 2, 0X0C, 0X01,
	0x23, 2, 0X0D, 0XA7,
	0x23, 2, 0X0E, 0X01,
	0x23, 2, 0X0F, 0XF3,
	0x23, 2, 0X10, 0X02,
	0x23, 2, 0X11, 0X2F,
	0x23, 2, 0X12, 0X02,
	0x23, 2, 0X13, 0X30,
	0x23, 2, 0X14, 0X02,
	0x23, 2, 0X15, 0X66,
	0x23, 2, 0X16, 0X02,
	0x23, 2, 0X17, 0XA0,
	0x23, 2, 0X18, 0X02,
	0x23, 2, 0X19, 0XC5,
	0x23, 2, 0X1A, 0X02,
	0x23, 2, 0X1B, 0XF8,
	0x23, 2, 0X1C, 0X03,
	0x23, 2, 0X1D, 0X1B,
	0x23, 2, 0X1E, 0X03,
	0x23, 2, 0X1F, 0X46,
	0x23, 2, 0X20, 0X03,
	0x23, 2, 0X21, 0X52,
	0x23, 2, 0X22, 0X03,
	0x23, 2, 0X23, 0X62,
	0x23, 2, 0X24, 0X03,
	0x23, 2, 0X25, 0X71,
	0x23, 2, 0X26, 0X03,
	0x23, 2, 0X27, 0X83,
	0x23, 2, 0X28, 0X03,
	0x23, 2, 0X29, 0X94,
	0x23, 2, 0X2A, 0X03,
	0x23, 2, 0X2B, 0XA3,
	0x23, 2, 0X2D, 0X03,
	0x23, 2, 0X2F, 0XAD,
	0x23, 2, 0X30, 0X03,
	0x23, 2, 0X31, 0XCC,

	0x23, 2, 0X32, 0X00, //Gamma G-
	0x23, 2, 0X33, 0X18,
	0x23, 2, 0X34, 0X00,
	0x23, 2, 0X35, 0X38,
	0x23, 2, 0X36, 0X00,
	0x23, 2, 0X37, 0X65,
	0x23, 2, 0X38, 0X00,
	0x23, 2, 0X39, 0X84,
	0x23, 2, 0X3A, 0X00,
	0x23, 2, 0X3B, 0X9B,
	0x23, 2, 0X3D, 0X00,
	0x23, 2, 0X3F, 0XAF,
	0x23, 2, 0X40, 0X00,
	0x23, 2, 0X41, 0XC1,
	0x23, 2, 0X42, 0X00,
	0x23, 2, 0X43, 0XD2,
	0x23, 2, 0X44, 0X00,
	0x23, 2, 0X45, 0XDF,
	0x23, 2, 0X46, 0X01,
	0x23, 2, 0X47, 0X11,
	0x23, 2, 0X48, 0X01,
	0x23, 2, 0X49, 0X38,
	0x23, 2, 0X4A, 0X01,
	0x23, 2, 0X4B, 0X76,
	0x23, 2, 0X4C, 0X01,
	0x23, 2, 0X4D, 0XA7,
	0x23, 2, 0X4E, 0X01,
	0x23, 2, 0X4F, 0XF3,
	0x23, 2, 0X50, 0X02,
	0x23, 2, 0X51, 0X2F,
	0x23, 2, 0X52, 0X02,
	0x23, 2, 0X53, 0X30,
	0x23, 2, 0X54, 0X02,
	0x23, 2, 0X55, 0X66,
	0x23, 2, 0X56, 0X02,
	0x23, 2, 0X58, 0XA0,
	0x23, 2, 0X59, 0X02,
	0x23, 2, 0X5A, 0XC5,
	0x23, 2, 0X5B, 0X02,
	0x23, 2, 0X5C, 0XF8,
	0x23, 2, 0X5D, 0X03,
	0x23, 2, 0X5E, 0X1B,
	0x23, 2, 0X5F, 0X03,
	0x23, 2, 0X60, 0X46,
	0x23, 2, 0X61, 0X03,
	0x23, 2, 0X62, 0X52,
	0x23, 2, 0X63, 0X03,
	0x23, 2, 0X64, 0X62,
	0x23, 2, 0X65, 0X03,
	0x23, 2, 0X66, 0X71,
	0x23, 2, 0X67, 0X03,
	0x23, 2, 0X68, 0X83,
	0x23, 2, 0X69, 0X03,
	0x23, 2, 0X6A, 0X94,
	0x23, 2, 0X6B, 0X03,
	0x23, 2, 0X6C, 0XA3,
	0x23, 2, 0X6D, 0X03,
	0x23, 2, 0X6E, 0XAD,
	0x23, 2, 0X6F, 0X03,
	0x23, 2, 0X70, 0XCC,

	0x23, 2, 0X71, 0X00, //Gamma B+
	0x23, 2, 0X72, 0X18,
	0x23, 2, 0X73, 0X00,
	0x23, 2, 0X74, 0X38,
	0x23, 2, 0X75, 0X00,
	0x23, 2, 0X76, 0X65,
	0x23, 2, 0X77, 0X00,
	0x23, 2, 0X78, 0X84,
	0x23, 2, 0X79, 0X00,
	0x23, 2, 0X7A, 0X9B,
	0x23, 2, 0X7B, 0X00,
	0x23, 2, 0X7C, 0XAF,
	0x23, 2, 0X7D, 0X00,
	0x23, 2, 0X7E, 0XC1,
	0x23, 2, 0X7F, 0X00,
	0x23, 2, 0X80, 0XD2,
	0x23, 2, 0X81, 0X00,
	0x23, 2, 0X82, 0XDF,
	0x23, 2, 0X83, 0X01,
	0x23, 2, 0X84, 0X11,
	0x23, 2, 0X85, 0X01,
	0x23, 2, 0X86, 0X38,
	0x23, 2, 0X87, 0X01,
	0x23, 2, 0X88, 0X76,
	0x23, 2, 0X89, 0X01,
	0x23, 2, 0X8A, 0XA7,
	0x23, 2, 0X8B, 0X01,
	0x23, 2, 0X8C, 0XF3,
	0x23, 2, 0X8D, 0X02,
	0x23, 2, 0X8E, 0X2F,
	0x23, 2, 0X8F, 0X02,
	0x23, 2, 0X90, 0X30,
	0x23, 2, 0X91, 0X02,
	0x23, 2, 0X92, 0X66,
	0x23, 2, 0X93, 0X02,
	0x23, 2, 0X94, 0XA0,
	0x23, 2, 0X95, 0X02,
	0x23, 2, 0X96, 0XC5,
	0x23, 2, 0X97, 0X02,
	0x23, 2, 0X98, 0XF8,
	0x23, 2, 0X99, 0X03,
	0x23, 2, 0X9A, 0X1B,
	0x23, 2, 0X9B, 0X03,
	0x23, 2, 0X9C, 0X46,
	0x23, 2, 0X9D, 0X03,
	0x23, 2, 0X9E, 0X52,
	0x23, 2, 0X9F, 0X03,
	0x23, 2, 0XA0, 0X62,
	0x23, 2, 0XA2, 0X03,
	0x23, 2, 0XA3, 0X71,
	0x23, 2, 0XA4, 0X03,
	0x23, 2, 0XA5, 0X83,
	0x23, 2, 0XA6, 0X03,
	0x23, 2, 0XA7, 0X94,
	0x23, 2, 0XA9, 0X03,
	0x23, 2, 0XAA, 0XA3,
	0x23, 2, 0XAB, 0X03,
	0x23, 2, 0XAC, 0XAD,
	0x23, 2, 0XAD, 0X03,
	0x23, 2, 0XAE, 0XCC,

	0x23, 2, 0XAF, 0X00, //Gamma B-
	0x23, 2, 0XB0, 0X18,
	0x23, 2, 0XB1, 0X00,
	0x23, 2, 0XB2, 0X38,
	0x23, 2, 0XB3, 0X00,
	0x23, 2, 0XB4, 0X65,
	0x23, 2, 0XB5, 0X00,
	0x23, 2, 0XB6, 0X84,
	0x23, 2, 0XB7, 0X00,
	0x23, 2, 0XB8, 0X9B,
	0x23, 2, 0XB9, 0X00,
	0x23, 2, 0XBA, 0XAF,
	0x23, 2, 0XBB, 0X00,
	0x23, 2, 0XBC, 0XC1,
	0x23, 2, 0XBD, 0X00,
	0x23, 2, 0XBE, 0XD2,
	0x23, 2, 0XBF, 0X00,
	0x23, 2, 0XC0, 0XDF,
	0x23, 2, 0XC1, 0X01,
	0x23, 2, 0XC2, 0X11,
	0x23, 2, 0XC3, 0X01,
	0x23, 2, 0XC4, 0X38,
	0x23, 2, 0XC5, 0X01,
	0x23, 2, 0XC6, 0X76,
	0x23, 2, 0XC7, 0X01,
	0x23, 2, 0XC8, 0XA7,
	0x23, 2, 0XC9, 0X01,
	0x23, 2, 0XCA, 0XF3,
	0x23, 2, 0XCB, 0X02,
	0x23, 2, 0XCC, 0X2F,
	0x23, 2, 0XCD, 0X02,
	0x23, 2, 0XCE, 0X30,
	0x23, 2, 0XCF, 0X02,
	0x23, 2, 0XD0, 0X66,
	0x23, 2, 0XD1, 0X02,
	0x23, 2, 0XD2, 0XA0,
	0x23, 2, 0XD3, 0X02,
	0x23, 2, 0XD4, 0XC5,
	0x23, 2, 0XD5, 0X02,
	0x23, 2, 0XD6, 0XF8,
	0x23, 2, 0XD7, 0X03,
	0x23, 2, 0XD8, 0X1B,
	0x23, 2, 0XD9, 0X03,
	0x23, 2, 0XDA, 0X46,
	0x23, 2, 0XDB, 0X03,
	0x23, 2, 0XDC, 0X52,
	0x23, 2, 0XDD, 0X03,
	0x23, 2, 0XDE, 0X62,
	0x23, 2, 0XDF, 0X03,
	0x23, 2, 0XE0, 0X71,
	0x23, 2, 0XE1, 0X03,
	0x23, 2, 0XE2, 0X83,
	0x23, 2, 0XE3, 0X03,
	0x23, 2, 0XE4, 0X94,
	0x23, 2, 0XE5, 0X03,
	0x23, 2, 0XE6, 0XA3,
	0x23, 2, 0XE7, 0X03,
	0x23, 2, 0XE8, 0XAD,
	0x23, 2, 0XE9, 0X03,
	0x23, 2, 0XEA, 0XCC,

	0x23, 2, 0XFF, 0X01, //CMD page select
	0x23, 2, 0XFB, 0X01, //NON-RELOAD CMD
	0x23, 2, 0XFF, 0X02, //CMD page select
	0x23, 2, 0XFB, 0X01, //NON-RELOAD CMD
	0x23, 2, 0XFF, 0X04, //CMD page select
	0x23, 2, 0XFB, 0X01, //NON-RELOAD CMD
	0x23, 2, 0XFF, 0X00, //CMD page select

	0x23, 2, 0XD3, 0X05,
	0x23, 2, 0XD4, 0X04,

	0x23, 2, 0X11, 0X00, //Sleep out
	0xfd, 1, 100, //delay 100ms
	0x23, 2, 0XFF, 0X00,

	0x23, 2, 0X35, 0X00, //TE on

	0x23, 2, 0X29, 0X00, //Display on
	0xfd, 1, 100, //delay 100ms
	0xff, 0,   /* ending flag */
};

static unsigned char ext_init_off_table_TL050FHV02CT[LCD_EXTERN_INIT_OFF_MAX] = {
	0x05, 1, 0x28, /* display off */
	0xfd, 1, 10,   /* delay 10ms */
	0x05, 1, 0x10, /* sleep in */
	0xfd, 1, 150,  /* delay 150ms */
	0xFF, 0,   /* ending flag */
};

#endif

