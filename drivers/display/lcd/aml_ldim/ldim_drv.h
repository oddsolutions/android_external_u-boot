/* SPDX-License-Identifier: (GPL-2.0+ OR MIT) */
/*
 * drivers/display/lcd/aml_ldim/ldim_drv.h
 *
 * Copyright (C) 2020 Amlogic, Inc. All rights reserved.
 *
 */

#ifndef __AML_LDIM_DRV_H__
#define __AML_LDIM_DRV_H__
#include <asm/arch/io.h>
#include <amlogic/aml_lcd_vout.h>

#define LDIMPR(fmt, args...)     printf("ldim: "fmt"", ## args)
#define LDIMERR(fmt, args...)    printf("ldim: error: "fmt"", ## args)

#define LD_DATA_DEPTH   12
#define LD_DATA_MAX     0xfff

extern void bl_pwm_ctrl(struct bl_pwm_config_s *bl_pwm, int status);
#ifdef CONFIG_OF_LIBFDT
extern enum bl_pwm_port_e bl_pwm_str_to_pwm(const char *str);
#endif

/* ldim device probe function */
extern int aml_ldim_device_probe(char *dt_addr);

#endif
