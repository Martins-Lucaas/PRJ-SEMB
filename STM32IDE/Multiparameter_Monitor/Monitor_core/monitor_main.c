/*
 * monitor_main.c
 *
 *  Created on: Oct 30, 2023
 *      Author: lucas
 */

#include "myheaders.h"

extern int bt_sair;
extern int bt_oxy;
extern int bt_temp;
extern int bt_emg;

void init(void)
{
	if (bt_emg == 1){

		void emg_init(void);
	}
	if (bt_oxy == 1){

		void max30100_init(void);
	}
	if (bt_temp == 1){

		void MLX90614_ScanDevices (void);
	}
	if (bt_sair == 1){

			HAL_NVIC_SystemReset();
	}
}

