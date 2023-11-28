#include <gui/common/FrontendApplication.hpp>

FrontendApplication::FrontendApplication(Model& m, FrontendHeap& heap)
    : FrontendApplicationBase(m, heap)
{
}
#include "stm32f4xx_hal.h"

extern "C" {
void SystemClock_Config(void);
void Error_Handler(void);
}

// Defina os identificadores dos botões
#define bt_sair  GUI_ID_USER + 0
#define bt_oxy   GUI_ID_USER + 1
#define bt_temp  GUI_ID_USER + 2
#define bt_emg   GUI_ID_USER + 3

