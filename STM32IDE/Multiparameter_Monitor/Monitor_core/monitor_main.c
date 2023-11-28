/*
 * monitor_main.c
 *
 *  Created on: Oct 30, 2023
 *      Author: lucas
 */
#include "myheaders.h"
//void setup();

//void loop();
void init(void)
{
	// Inicialização do display
	    ILI9341_Init();
	    ILI9341_SetRotation(1);

	    // Leitura dos dados dos sensores
	    //uint32_t temperatura = MLX90614_ReadTemp();
	    //uint32_t oximetria = max30100_read_fifo();
	    //double emg = void emg_system();

        // Exibição dos dados no display
        //char buffer[50];

        // Desenha temperatura
        sprintf("Temperatura: 10C");
        ILI9341_DrawText(10, 10, buffer, ILI9341_COLOR_WHITE, ILI9341_COLOR_BLACK);

        // Desenha oximetria
        //sprintf(buffer, "Oximetria: %d%%", oximetria);
        //ILI9341_DrawText(10, 30, buffer, ILI9341_COLOR_WHITE, ILI9341_COLOR_BLACK);

        // Desenha EMG
        //sprintf(buffer, "EMG: %d", emg);
        //ILI9341_DrawText(10, 50, buffer, ILI9341_COLOR_WHITE, ILI9341_COLOR_BLACK);

}


/*código aula 7/11*/

/*switch(gpio_PIN)
 *
 * case (USR SWT PIN)
 *
 * Desliga interrupção IRQ()
 *
 * liga timer
 *
 *
 *chama callback do app
 * HAL_(Nome do que eu quero)_(Função)(variável)
 *
 *
 *
 * void halTim
 *
 * configurar um timer led desligado aperta botão liga o timer
 * ligar o led e gera interrupções que liga e desliga o led pra kraio
 * fazer funções do calback
 *
 *
 * */


/* PWM
 *
 * modular um sinal significa alterar a caracteristca de um sinal para outra forma
 *
 * FM frequencia modular
 * banda base 20 a 20kHz
 *
 * PWM é um sinal periódico uma onda quadrada com períodos
 *
 * Importante para o PWM: Período e Duty cicle
 *
 * Implica um circuito de período morto entre a mudança de PWM complementares
 *
 * capture compare register vai gerar o ciclo
 * GERAR UM PWM COM A FREW DE 20KHZ
 * COM DUTY CICLE DE 50%
 *
 * SEMPRE CRIAR UM .H E UM .C PARA O CÓDIGO
 * CADA SENSOR VAI TER UMA DE CADA
 * COLOCAR UM MONITOR.C PARA JUNTAR A CHAMADA DE TUDO
 * CONTROLAR O CICLO DOS SENSORES COM PWM
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 */
