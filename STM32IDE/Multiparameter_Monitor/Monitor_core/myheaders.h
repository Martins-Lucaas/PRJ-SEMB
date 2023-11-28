/*
 * myheaders.h
 *
 *  Created on: Nov 27, 2023
 *      Author: lucas
 */

#ifndef MYHEADERS_H_
#define MYHEADERS_H_

#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include "z_displ_ILI9XXX.h"
#include "main.h"

void emg_init(void);
void init(void);
void max30100_init(void);
void MLX90614_ScanDevices (void);



#endif /* MYHEADERS_H_ */
