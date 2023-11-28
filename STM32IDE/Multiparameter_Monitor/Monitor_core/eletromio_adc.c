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
extern TIM_HandleTypeDef htim2;
#define ADC_Buffer 4096


void emg_system(void)
{
	HAL_TIM_PWM_Start(&htim2, TIM_CHANNEL_1);
	uint16_t dutycicle;
	uint16_t adc_buf[ADC_Buffer];
	HAL_ADC_Start_DMA(&hadc1, (uint32_t*)adc_buf, ADC_Buffer);
	TIM2->CCR1=dutycicle;
	return adc_buf;
}

//Próximas duas funções mostram em que estado a conversão AD está por meio do LED na porta PA9
void HAL_ADC_MetadeCompletoCallBack(ADC_HandleTypeDef* hadc){
	HAL_GPIO_WritePin(GPIOA, led_adc_Pin|GPIO_PIN_9, GPIO_PIN_SET);

}
void HAL_ADC_CompletoCallBack(ADC_HandleTypeDef* hadc){
	HAL_GPIO_WritePin(GPIOA, led_adc_Pin|GPIO_PIN_9, GPIO_PIN_RESET);

}
