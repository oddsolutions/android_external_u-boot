/* SPDX-License-Identifier: (GPL-2.0+ OR MIT) */
/*
 * include/amlogic/vmode.h
 *
 * Copyright (C) 2020 Amlogic, Inc. All rights reserved.
 *
 */

#ifndef VMODE_H
#define VMODE_H

typedef enum vmode_e {
	VMODE_480I = 0,
	VMODE_480I_RPT,
	VMODE_480CVBS,
	VMODE_480P,
	VMODE_480P_RPT,
	VMODE_480P_120HZ,
	VMODE_576I,
	VMODE_576I_RPT,
	VMODE_576CVBS,
	VMODE_576P,
	VMODE_576P_RPT,
	VMODE_576P_100HZ,
	VMODE_720P,
	VMODE_768P,
	VMODE_1080I,
	VMODE_1080P,
	VMODE_720P_50HZ,
	VMODE_720P_100HZ,
	VMODE_720P_120HZ,
	VMODE_1080I_50HZ,
	VMODE_1080I_100HZ,
	VMODE_1080I_120HZ,
	VMODE_1080P_30HZ,
	VMODE_1080P_50HZ,
	VMODE_1080P_25HZ,
	VMODE_1080P_24HZ,
	VMODE_1080P_100HZ,
	VMODE_1080P_120HZ,
	VMODE_4K2K_30HZ,
	VMODE_4K2K_25HZ,
	VMODE_4K2K_24HZ,
	VMODE_4K2K_SMPTE,
	VMODE_4K2K_SMPTE_25HZ,
	VMODE_4K2K_SMPTE_30HZ,
	VMODE_4K2K_SMPTE_50HZ,
	VMODE_4K2K_SMPTE_60HZ,
	VMODE_4K2K_SMPTE_50HZ_Y420,
	VMODE_4K2K_SMPTE_60HZ_Y420,
	VMODE_4K2K_FAKE_5G,
	VMODE_4K2K_60HZ,
	VMODE_4K2K_60HZ_Y420,
	VMODE_4K2K_50HZ,
	VMODE_4K2K_50HZ_Y420,
	VMODE_4K2K_5G,
	VMODE_4K1K_120HZ,
	VMODE_4K1K_120HZ_Y420,
	VMODE_4K1K_100HZ,
	VMODE_4K1K_100HZ_Y420,
	VMODE_4K05K_240HZ,
	VMODE_4K05K_240HZ_Y420,
	VMODE_4K05K_200HZ,
	VMODE_4K05K_200HZ_Y420,
	VMODE_640x480p60hz,
	VMODE_800x480p60hz,
	VMODE_800x600p60hz,
	VMODE_852x480p60hz,
	VMODE_854x480p60hz,
	VMODE_1024x600p60hz,
	VMODE_1024x768p60hz,
	VMODE_1152x864p75hz,
	VMODE_1280x600p60hz,
	VMODE_1280x768p60hz,
	VMODE_1280x800p60hz,
	VMODE_1280x960p60hz,
	VMODE_1280x1024p60hz,
	VMODE_1360x768p60hz,
	VMODE_1366x768p60hz,
	VMODE_1400x1050p60hz,
	VMODE_1440x900p60hz,
	VMODE_1440x2560p60hz,
	VMODE_1440x2560p70hz,
	VMODE_1600x900p60hz,
	VMODE_1600x1200p60hz,
	VMODE_1680x1050p60hz,
	VMODE_1920x1200p60hz,
	VMODE_2160x1200p90hz,
	VMODE_2560x1080p60hz,
	VMODE_2560x1440p60hz,
	VMODE_2560x1600p60hz,
	VMODE_3440x1440p60hz,
	VMODE_VGA,
	VMODE_SVGA,
	VMODE_XGA,
	VMODE_SXGA,
	VMODE_WSXGA,
	VMODE_FHDVGA,
	VMODE_LCD,
	VMODE_MAX,
	VMODE_INIT_NULL,
	VMODE_MASK = 0xFF,
} vmode_t;

#endif
