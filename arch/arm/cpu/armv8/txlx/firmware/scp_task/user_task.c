/* SPDX-License-Identifier: (GPL-2.0+ OR MIT) */
/*
 * arch/arm/cpu/armv8/txlx/firmware/scp_task/user_task.c
 *
 * Copyright (C) 2020 Amlogic, Inc. All rights reserved.
 *
 */

#include <config.h>
#include "config.h"
#include "data.h"
#include "registers.h"
#include "task_apis.h"
#include "suspend.h"
#define TASK_ID_LOW_MB	3
#define TASK_ID_HIGH_MB	4
#define TASK_ID_SECURE_MB  5

enum scpi_client_id {
	SCPI_CL_NONE,
	SCPI_CL_CLOCKS,
	SCPI_CL_DVFS,
	SCPI_CL_POWER,
	SCPI_CL_THERMAL,
	SCPI_CL_REMOTE,
	SCPI_MAX,
};

void __switch_back_securemb(void)
{
	register int p0 asm("r0") = 2;
	register int p1 asm("r1") = TASK_ID_SECURE_MB;

	asm("svc 0" :  : "r"(p0), "r"(p1));
}
void __switch_back_highmb(void)
{
	register int p0 asm("r0") = 2;
	register int p1 asm("r1") = TASK_ID_HIGH_MB;

	asm("svc 0" :  : "r"(p0), "r"(p1));
}

void __switch_back_lowmb(void)
{
	register int p0 asm("r0") = 2;
	register int p1 asm("r1") = TASK_ID_LOW_MB;

	asm("svc 0" :  : "r"(p0), "r"(p1));
}

void secure_task(void)
{
	unsigned *pcommand =
	    (unsigned *)(&(secure_task_share_mem[TASK_COMMAND_OFFSET]));
	unsigned *response =
	    (unsigned *)(&(secure_task_share_mem[TASK_RESPONSE_OFFSET]));
	unsigned command;
	struct resume_param *presume;
	unsigned int state;

	/*init bss */
	bss_init();
	dbg_prints("secure task start!\n");

	/* suspend pwr ops init*/
	suspend_pwr_ops_init();
	*pcommand = 0;

	while (1) {
		/* do secure task process */
		command = *pcommand;
		if (command) {
			dbg_print("process command ", command);
			if (command == SEC_TASK_GET_WAKEUP_SRC) {
				state = *(pcommand+1);
				suspend_get_wakeup_source(
						(void *)response,  state);
			} else if (command == COMMAND_SUSPEND_ENTER) {
				state = *(pcommand+1);
				enter_suspend(state);
				*pcommand = 0;
				*response = RESPONSE_SUSPEND_LEAVE;
				presume = (struct resume_param *)(response+1);
				presume->method = resume_data.method;
				if (presume->method == CEC_WAKEUP) {
					presume->date1 = resume_data.date1;
					presume->date2 = resume_data.date2;
				}
			}
	}
		__switch_back_securemb();
	}
}

void set_wakeup_method(unsigned int method)
{
	resume_data.method = method;
}

void set_cec_val1(unsigned int cec_val)
{
	resume_data.date1 = cec_val;
	dbg_print("val1: ", resume_data.date1);
}

void set_cec_val2(unsigned int cec_val)
{
	resume_data.date2 = cec_val;
	dbg_print("val2: ", resume_data.date2);
}

void process_high_task(unsigned command)
{
	unsigned *pcommand =
	    (unsigned *)(&(high_task_share_mem[TASK_COMMAND_OFFSET]));
/*	unsigned *response =
	    (unsigned *)(&(high_task_share_mem[TASK_RESPONSE_OFFSET]));
*/
	if (command == HIGH_TASK_SET_DVFS)
		set_dvfs(*(pcommand + 1), *(pcommand + 2));
}

void high_task(void)
{
	unsigned *pcommand =
	    (unsigned *)(&(high_task_share_mem[TASK_COMMAND_OFFSET]));
	unsigned *response =
	    (unsigned *)(&(high_task_share_mem[TASK_RESPONSE_OFFSET]));
	unsigned command;

	dbg_prints("high task start!\n");
	*pcommand = 0;

	while (1) {
		/* do high task process */
		command = *pcommand;
		if (command) {
			/*dbg_print("process command ", command);*/
			process_high_task(command);
			*pcommand = 0;
			*response = 0;
		}
		__switch_back_highmb();
	}
}

extern unsigned int usr_pwr_key;
#ifdef CONFIG_SUPPORT_CUSOTMER_BOARD
extern void process_customer_low_task(unsigned int, unsigned int *, unsigned int *);
#endif
void process_low_task(unsigned command)
{
	unsigned *pcommand =
	    (unsigned *)(&(low_task_share_mem[TASK_COMMAND_OFFSET]));
	unsigned *response =
	    (unsigned *)(&(low_task_share_mem[TASK_RESPONSE_OFFSET]));
	unsigned para1;

	if (command == LOW_TASK_GET_DVFS_INFO) {
		para1 = *(pcommand + 1);
		get_dvfs_info(para1,
			(unsigned char *)(response+2), (response+1));
	} else if ((command & 0xffff) == LOW_TASK_USR_DATA) {/*0-15bit: comd; 16-31bit: client_id*/
		if ((command >> 16) == SCPI_CL_REMOTE) {
			usr_pwr_key = *(pcommand + 2);/*tx_size locates at *(pcommand + 1)*/
			dbg_print("pwr_key=",usr_pwr_key);
		} else {
#ifdef CONFIG_SUPPORT_CUSOTMER_BOARD
			process_customer_low_task(command, pcommand, response);
#endif
		}
	}
}

void low_task(void)
{
	unsigned *pcommand =
	    (unsigned *)(&(low_task_share_mem[TASK_COMMAND_OFFSET]));
	unsigned *response =
	    (unsigned *)(&(low_task_share_mem[TASK_RESPONSE_OFFSET]));
	unsigned command;

	*pcommand = 0;
	dbg_prints("low task start!\n");

	while (1) {
		/* do low task process */
		command = *pcommand;
		if (command) {
			process_low_task(command);

			*pcommand = 0;
			*response = 0;
		}
		__switch_back_lowmb();
	}
}
