/* SPDX-License-Identifier: (GPL-2.0+ OR MIT) */
/*
 * common/cmd_cec.c
 *
 * Copyright (C) 2020 Amlogic, Inc. All rights reserved.
 *
 */

#include <common.h>
#include <command.h>
#include <asm/cpu_id.h>
#include <asm/arch/io.h>
#include <asm/arch/clock.h>
#include <amlogic/aml_cec.h>

#define CEC_VERSION "tl1 cec AC suspend mode 20190715\n"

static void cec_init(int logic_addr, unsigned char fun_cfg)
{
	printf("%s :%d,%#x\n", __func__, logic_addr,fun_cfg);
	cec_hw_init(logic_addr, fun_cfg);
}

static int do_cec(cmd_tbl_t *cmdtp, int flag, int argc, char * const argv[])
{
	int logic_addr = 0;
	int fun_cfg = 0x2f;

	printf(CEC_VERSION);

	if (argc >=  2)
		logic_addr = simple_strtoul(argv[1], NULL, 10);
	if (argc >=  3)
		fun_cfg = simple_strtoul(argv[2], NULL, 16);

	printf("logic_addr=0x%x, fun_cfg=0x%x\n",
		logic_addr, fun_cfg);

	cec_init(logic_addr, (unsigned char)fun_cfg);

	return 0;
}

U_BOOT_CMD(
		cec, CONFIG_SYS_MAXARGS, 0, do_cec,
		"Amlogic cec",
		"	- hdmi cec function \n"
		"	- param: logic addr;fun_cfg\n"
		"\n"
);


