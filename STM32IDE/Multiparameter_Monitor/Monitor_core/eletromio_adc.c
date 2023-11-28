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


void HAL_ADC_HalfCpltCallback(ADC_HandleTypeDef* hadc){
    HAL_GPIO_WritePin(GPIOA, led_adc_Pin|GPIO_PIN_9, GPIO_PIN_SET);
}

void HAL_ADC_ConvCpltCallback(ADC_HandleTypeDef* hadc){
    HAL_GPIO_WritePin(GPIOA, led_adc_Pin|GPIO_PIN_9, GPIO_PIN_RESET);
}

void emg_init(void)
{
    uint16_t adc_buf[ADC_Buffer];
    HAL_ADC_Start_DMA(&hadc1, (uint32_t*)adc_buf, ADC_Buffer);

    for (int i = 0; i < ADC_Buffer; i++) {
        uint8_t data[2];
        data[0] = (adc_buf[i] & 0xFF00) >> 8;
        data[1] = adc_buf[i] & 0x00FF;
        HAL_UART_Transmit(&huart3, data, 2, HAL_MAX_DELAY);//Transimite pela UART a amostra armazenada em data divida em duas trilhas
    }

}
