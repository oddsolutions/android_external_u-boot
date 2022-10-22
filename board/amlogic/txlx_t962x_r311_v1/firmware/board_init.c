/* SPDX-License-Identifier: (GPL-2.0+ OR MIT) */
/*
 * board/amlogic/txlx_t962x_r311_v1/firmware/board_init.c
 *
 * Copyright (C) 2020 Amlogic, Inc. All rights reserved.
 *
 */

#include "power.c"

/* bl2 customer code */

#define PNL_PREG_PAD_GPIO1_EN_N           0x0f
#define PNL_PREG_PAD_GPIO1_O              0x10
#define PNL_PREG_PAD_GPIO1_I              0x11

#define PNL_PREG_PAD_GPIO3_EN_N           0x15
#define PNL_PREG_PAD_GPIO3_O              0x16
#define PNL_PREG_PAD_GPIO3_I              0x17

#define PNL_REG_BASE               (0xff634400L)
#define PNL_REG(reg)               (PNL_REG_BASE + (reg << 2))
#define PNL_REG_R(_reg)            (*(volatile unsigned int *)PNL_REG(_reg))
#define PNL_REG_W(_reg, _value)    *(volatile unsigned int *)PNL_REG(_reg) = (_value);
static void panel_power_init(void)
{
	serial_puts("init panel power\n");

	/* panel: GPIOZ_13/8/9 */ /* remove GPIOZ_10 for 2D/3D special case */
	PNL_REG_W(PNL_PREG_PAD_GPIO3_O,
		(PNL_REG_R(PNL_PREG_PAD_GPIO3_O) & ~((0x3 << 8) | (1 << 13))));
	PNL_REG_W(PNL_PREG_PAD_GPIO3_EN_N,
		(PNL_REG_R(PNL_PREG_PAD_GPIO3_EN_N) & ~((0x3 << 8) | (1 << 13))));
	/* panel: GPIOH_4/5 */
	PNL_REG_W(PNL_PREG_PAD_GPIO1_O,
		(PNL_REG_R(PNL_PREG_PAD_GPIO1_O) & ~(0x3 << 24)));
	PNL_REG_W(PNL_PREG_PAD_GPIO1_EN_N,
		(PNL_REG_R(PNL_PREG_PAD_GPIO1_EN_N) & ~(0x3 << 24)));

	/* backlight: GPIOZ_4/6/7 */
	PNL_REG_W(PNL_PREG_PAD_GPIO3_O,
		(PNL_REG_R(PNL_PREG_PAD_GPIO3_O) & ~((1 << 4) | (0x3 << 6))));
	PNL_REG_W(PNL_PREG_PAD_GPIO3_EN_N,
		(PNL_REG_R(PNL_PREG_PAD_GPIO3_EN_N) & ~((1 << 4) | (0x3 << 6))));
}

void board_init(void)
{
	power_init(0);

	panel_power_init();
}