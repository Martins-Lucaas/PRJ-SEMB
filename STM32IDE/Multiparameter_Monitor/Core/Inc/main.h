/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2023 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f4xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

void HAL_TIM_MspPostInit(TIM_HandleTypeDef *htim);

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define touch_int_Pin GPIO_PIN_4
#define touch_int_GPIO_Port GPIOA
#define displ_sck_Pin GPIO_PIN_5
#define displ_sck_GPIO_Port GPIOA
#define touch_mosi_Pin GPIO_PIN_6
#define touch_mosi_GPIO_Port GPIOA
#define displ_mosi_Pin GPIO_PIN_7
#define displ_mosi_GPIO_Port GPIOA
#define usart_emg_rx_Pin GPIO_PIN_5
#define usart_emg_rx_GPIO_Port GPIOC
#define temp_scl_Pin GPIO_PIN_10
#define temp_scl_GPIO_Port GPIOB
#define displ_cs_Pin GPIO_PIN_12
#define displ_cs_GPIO_Port GPIOB
#define touch_cs_Pin GPIO_PIN_13
#define touch_cs_GPIO_Port GPIOB
#define displ_dc_Pin GPIO_PIN_14
#define displ_dc_GPIO_Port GPIOB
#define displ_rst_Pin GPIO_PIN_15
#define displ_rst_GPIO_Port GPIOB
#define displ_led_Pin GPIO_PIN_7
#define displ_led_GPIO_Port GPIOC
#define oxi_sda_Pin GPIO_PIN_9
#define oxi_sda_GPIO_Port GPIOC
#define oxi_scl_Pin GPIO_PIN_8
#define oxi_scl_GPIO_Port GPIOA
#define led_adc_Pin GPIO_PIN_9
#define led_adc_GPIO_Port GPIOA
#define usart_emg_tx_Pin GPIO_PIN_10
#define usart_emg_tx_GPIO_Port GPIOC
#define temp_sda_Pin GPIO_PIN_12
#define temp_sda_GPIO_Port GPIOC

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
