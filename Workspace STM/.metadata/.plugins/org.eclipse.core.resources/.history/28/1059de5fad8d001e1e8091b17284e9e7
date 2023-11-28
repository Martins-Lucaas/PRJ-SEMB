/*
 * eletromio_adc.c
 *
 *  Created on: Nov 27, 2023
 *      Author: lucas
 */

#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include "main.h"

extern TIM_HandleTypeDef hadc1;
extern UART_HandleTypeDef huart3;
#define ADC_Buffer 4096

void emg_system(void)
{
	uint16_t adc_buf[ADC_Buffer];
	HAL_ADC_Start_DMA(&hadc1, (uint32_t*)adc_buf, ADC_Buffer);
	if (HAL_ADC_CompletoCallBack){
		return adc_buf;
	}

}
void HAL_ADC_MetadeCompletoCallBack(ADC_HandleTypeDef* hadc){
	HAL_GPIO_WritePin(GPIOA, led_adc_Pin|GPIO_PIN_9, GPIO_PIN_SET);

}
void HAL_ADC_CompletoCallBack(ADC_HandleTypeDef* hadc){
	HAL_GPIO_WritePin(GPIOA, led_adc_Pin|GPIO_PIN_9, GPIO_PIN_RESET);

}
