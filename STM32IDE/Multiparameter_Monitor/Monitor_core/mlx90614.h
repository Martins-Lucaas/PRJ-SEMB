/*
 * mlx90614.h
 *
 *  Created on: Nov 22, 2023
 *      Author: karol
 */

#ifndef MLX90614_H_
#define MLX90614_H_

#endif /* MLX90614_H_ */

/* ENDEREÇO PADRÃO DO ESCRAVO */
#define MLX90614_DEFAULT_SA 0x5A

/* OPCODE DEFINES */
#define MLX90614_OP_RAM		0x00 /* Indica que a operação deve ser realizada na RAM */
#define MLX90614_OP_EEPROM	0x20 /* Indica que a operação deve ser realizada na EEPROM */
#define MLX90614_OP_SLEEP	0xFF /* indica que o dispositivo deve entrar no modo economia de energia */

<<<<<<< Updated upstream
=======
/* RAM offsets with 16-bit data, MSB first */
#define MLX90614_RAW1		(MLX90614_OP_RAM | 0x04) /* raw data IR channel 1 */
#define MLX90614_RAW2		(MLX90614_OP_RAM | 0x05) /* raw data IR channel 2 */
#define MLX90614_TAMB 		(MLX90614_OP_RAM | 0x06) /* ambient temperature */
#define MLX90614_TOBJ1 		(MLX90614_OP_RAM | 0x07) /* object 1 temperature */
#define MLX90614_TOBJ2 		(MLX90614_OP_RAM | 0x08) /* object 2 temperature */
/* EEPROM offsets with 16-bit data, MSB first */
#define MLX90614_TOMAX 		(MLX90614_OP_EEPROM | 0x00) /* object temperature min register */
#define MLX90614_TOMIN 		(MLX90614_OP_EEPROM | 0x01) /* object temperature max register */
/*#define MLX90614_PWMCTRL 	(MLX90614_OP_EEPROM | 0x02)  pwm configuration register */
#define MLX90614_TARANGE 	(MLX90614_OP_EEPROM | 0x03) /* ambient temperature register */
#define MLX90614_EMISSIVITY (MLX90614_OP_EEPROM | 0x04) /* emissivity correction register */
#define MLX90614_CFG1 		(MLX90614_OP_EEPROM | 0x05) /* configuration register */
#define MLX90614_SA 		(MLX90614_OP_EEPROM | 0x0E) /* slave address register */
#define MLX90614_ID1 		(MLX90614_OP_EEPROM | 0x1C) /*[read-only] 1 ID register */
#define MLX90614_ID2 		(MLX90614_OP_EEPROM | 0x1D) /*[read-only] 2 ID register */
#define MLX90614_ID3 		(MLX90614_OP_EEPROM | 0x1E) /*[read-only] 3 ID register */
#define MLX90614_ID4 		(MLX90614_OP_EEPROM | 0x1F) /*[read-only] 4 ID register */
>>>>>>> Stashed changes

/* Deslocamentos de RAM com dados de 16 bits, MSB primeiro */
#define MLX90614_RAW1		(MLX90614_OP_RAM | 0x04) /* dados brutos do canal IR 1 */
#define MLX90614_RAW2		(MLX90614_OP_RAM | 0x05) /* dados brutos do canal IR 2 */
#define MLX90614_TAMB 		(MLX90614_OP_RAM | 0x06) /* temperatura ambiente */
#define MLX90614_TOBJ1 		(MLX90614_OP_RAM | 0x07) /* temperatura do objeto 1 */
#define MLX90614_TOBJ2 		(MLX90614_OP_RAM | 0x08) /* temperatura do objeto 2 */

/* Deslocamentos de EEPROM com dados de 16 bits, MSB primeiro */
#define MLX90614_TOMAX 		(MLX90614_OP_EEPROM | 0x00) /* registro mínimo de temperatura do objeto */
#define MLX90614_TOMIN 		(MLX90614_OP_EEPROM | 0x01) /* registro máximo de temperatura do objeto */
#define MLX90614_PWMCTRL 	(MLX90614_OP_EEPROM | 0x02) /* registro de configuração de PWM */
#define MLX90614_TARANGE 	(MLX90614_OP_EEPROM | 0x03) /* registro de temperatura ambiente */
#define MLX90614_EMISSIVITY (MLX90614_OP_EEPROM | 0x04) /* registro de correção de emissividade */
#define MLX90614_CFG1 		(MLX90614_OP_EEPROM | 0x05) /* registro de configuração */
#define MLX90614_SA 		(MLX90614_OP_EEPROM | 0x0E) /* registro de endereço do escravo */
#define MLX90614_ID1 		(MLX90614_OP_EEPROM | 0x1C) /*[somente leitura] registro ID 1 */
#define MLX90614_ID2 		(MLX90614_OP_EEPROM | 0x1D) /*[somente leitura] registro ID 2 */
#define MLX90614_ID3 		(MLX90614_OP_EEPROM | 0x1E) /*[somente leitura] registro ID 3 */
#define MLX90614_ID4 		(MLX90614_OP_EEPROM | 0x1F) /*[somente leitura] registro ID 4 */

/* Constantes para Debug */
#define MLX90614_DBG_OFF 0   /* Indica que o modo de depuração está desativado */
#define MLX90614_DBG_ON 1    /* Indica que o modo de depuração está ativado */
#define MLX90614_DBG_MSG_W 0 /* Usado para distinguir mensagens de depuração relacionadas à escrita 'W' */
#define MLX90614_DBG_MSG_R 1 /* Usado para distinguir mensagens de depuração relacionadas à leitura 'R' */

/* Protótipos de funções exportadas ---------------------------------------------*/
uint8_t CRC8_Calc(uint8_t*, const uint8_t); 			/* Calcular valor de checksum (CRC8) para um conjunto de dados */
void MLX90614_WriteReg(uint8_t, uint8_t, uint16_t); 	/* Escrever valor de 16 bits em um registro específico do sensor */
uint16_t MLX90614_ReadReg(uint8_t, uint8_t, uint8_t); 	/* Ler um valor de 16 bits de um registro específico do sensor */
float MLX90614_ReadTemp(uint8_t, uint8_t); 				/* Ler a temperatura de um canal específico do sensor */
void MLX90614_ScanDevices (void); 						/* Realizar uma varredura para encontrar dispositivos MLX90614 na rede */
void MLX90614_SendDebugMsg(uint8_t, uint8_t, uint8_t, uint16_t, uint8_t, uint8_t); /* Enviar mensagem de depuração */
