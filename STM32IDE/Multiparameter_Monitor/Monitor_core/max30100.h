/*
 * max30100.h
 *
 *  Created on: Nov 26, 2023
 *      Author: gabriel
 */

#ifndef MAX30100_H_
#define MAX30100_H_

#include "main.h"
#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include <string.h>


// Definição de constantes para o endereço I2C do sensor MAX30100 e o valor de tempo limite I2C
#define MAX30100_I2C_ADDR 0x57
#define MAX30100_I2C_TIMEOUT 1000


// Especifica constantes para o número de bytes por amostra e o comprimento máximo da amostra
#define MAX30100_BYTES_PER_SAMPLE 6
#define MAX30100_SAMPLE_LEN_MAX 32


// Define endereços para vários registros do MAX30100
#define MAX30100_INTERRUPT_STATUS_1 0x00
#define MAX30100_INTERRUPT_STATUS_2 0x01
#define MAX30100_INTERRUPT_ENABLE_1 0x02
#define MAX30100_INTERRUPT_ENABLE_2 0x03


// Define posições de bits para diferentes flags de interrupção nos registros de interrupção
#define MAX30100_INTERRUPT_A_FULL 7
#define MAX30100_INTERRUPT_PPG_RDY 6
#define MAX30100_INTERRUPT_ALC_OVF 5
#define MAX30100_INTERRUPT_DIE_TEMP_RDY 1


// Define endereços e configurações para registros relacionados ao FIFO
#define MAX30100_FIFO_WR_PTR 0x04
#define MAX30100_OVF_COUNTER 0x05
#define MAX30100_FIFO_RD_PTR 0x06

#define MAX30100_FIFO_DATA 0x07

#define MAX30100_FIFO_CONFIG 0x08
#define MAX30100_FIFO_CONFIG_SMP_AVE 5
#define MAX30100_FIFO_CONFIG_ROLL_OVER_EN 4
#define MAX30100_FIFO_CONFIG_FIFO_A_FULL 0


// Definições para registros de modo e configuração
#define MAX30100_MODE_CONFIG 0x09
#define MAX30100_MODE_SHDN 7
#define MAX30100_MODE_RESET 6
#define MAX30100_MODE_MODE 0

#define MAX30100_SPO2_CONFIG 0x0a
#define MAX30100_SPO2_ADC_RGE 5
#define MAX30100_SPO2_SR 2
#define MAX30100_SPO2_LEW_PW 0

#define MAX30100_LED_IR_PA1 0x0c
#define MAX30100_LED_RED_PA2 0x0d

#define MAX30100_MULTI_LED_CTRL_1 0x11
#define MAX30100_MULTI_LED_CTRL_SLOT2 4
#define MAX30100_MULTI_LED_CTRL_SLOT1 0
#define MAX30100_MULTI_LED_CTRL_2 0x12
#define MAX30100_MULTI_LED_CTRL_SLOT4 4
#define MAX30100_MULTI_LED_CTRL_SLOT3 0

#define MAX30100_DIE_TINT 0x1f
#define MAX30100_DIE_TFRAC 0x20
#define MAX30100_DIE_TFRAC_INCREMENT 0.0625f
#define MAX30100_DIE_TEMP_CONFIG 0x21
#define MAX30100_DIE_TEMP_EN 1

typedef enum max30100_mode_t
{
    max30100_heart_rate = 0x02,
    max30100_spo2 = 0x03,
    max30100_multi_led = 0x07
} max30100_mode_t;

typedef enum max30100_smp_ave_t
{
    max30100_smp_ave_1,
    max30100_smp_ave_2,
    max30100_smp_ave_4,
    max30100_smp_ave_8,
    max30100_smp_ave_16,
    max30100_smp_ave_32,
} max30100_smp_ave_t;

typedef enum max30100_sr_t
{
    max30100_sr_50,
    max30100_sr_100,
    max30100_sr_200,
    max30100_sr_400,
    max30100_sr_800,
    max30100_sr_1000,
    max30100_sr_1600,
    max30100_sr_3200
} max30100_sr_t;

typedef enum max30100_led_pw_t
{
    max30100_pw_15_bit,
    max30100_pw_16_bit,
    max30100_pw_17_bit,
    max30100_pw_18_bit
} max30100_led_pw_t;

typedef enum max30100_adc_t
{
    max30100_adc_2048,
    max30100_adc_4096,
    max30100_adc_8192,
    max30100_adc_16384
} max30100_adc_t;

typedef enum max30100_multi_led_ctrl_t
{
    max30100_led_off,
    max30100_led_red,
    max30100_led_ir
} max30100_multi_led_ctrl_t;

typedef struct max30100_t
{
    I2C_HandleTypeDef *_ui2c;
    uint32_t _ir_samples[32];
    uint32_t _red_samples[32];
    uint8_t _interrupt_flag;
} max30100_t;

void max30100_plot(uint32_t ir_sample, uint32_t red_sample);

void max30100_init(max30100_t *obj, I2C_HandleTypeDef *hi2c);
void max30100_write(max30100_t *obj, uint8_t reg, uint8_t *buf, uint16_t buflen);
void max30100_read(max30100_t *obj, uint8_t reg, uint8_t *buf, uint16_t buflen);

void max30100_reset(max30100_t *obj);

void max30100_set_a_full(max30100_t *obj, uint8_t enable);
void max30100_set_ppg_rdy(max30100_t *obj, uint8_t enable);
void max30100_set_alc_ovf(max30100_t *obj, uint8_t enable);
void max30100_set_die_temp_rdy(max30100_t *obj, uint8_t enable);
void max30100_set_die_temp_en(max30100_t *obj, uint8_t enable);

void max30100_on_interrupt(max30100_t *obj);
uint8_t max30100_has_interrupt(max30100_t *obj);
void max30100_interrupt_handler(max30100_t *obj);

void max30100_shutdown(max30100_t *obj, uint8_t shdn);

void max30100_set_mode(max30100_t *obj, max30100_mode_t mode);
void max30100_set_sampling_rate(max30100_t *obj, max30100_sr_t sr);

void max30100_set_led_pulse_width(max30100_t *obj, max30100_led_pw_t pw);
void max30100_set_adc_resolution(max30100_t *obj, max30100_adc_t adc);

void max30100_set_led_current_1(max30100_t *obj, float ma);
void max30100_set_led_current_2(max30100_t *obj, float ma);
void max30100_set_multi_led_slot_1_2(max30100_t *obj, max30100_multi_led_ctrl_t slot1, max30100_multi_led_ctrl_t slot2);
void max30100_set_multi_led_slot_3_4(max30100_t *obj, max30100_multi_led_ctrl_t slot3, max30100_multi_led_ctrl_t slot4);

void max30100_set_fifo_config(max30100_t *obj, max30100_smp_ave_t smp_ave, uint8_t roll_over_en, uint8_t fifo_a_full);
void max30100_clear_fifo(max30100_t *obj);
void max30100_read_fifo(max30100_t *obj);

void max30100_read_temp(max30100_t *obj, int8_t *temp_int, uint8_t *temp_frac);




#endif /* MAX30100_H_ */
