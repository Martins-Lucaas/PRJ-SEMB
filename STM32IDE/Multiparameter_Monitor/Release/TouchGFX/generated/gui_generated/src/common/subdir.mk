################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (11.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../TouchGFX/generated/gui_generated/src/common/FrontendApplicationBase.cpp 

OBJS += \
./TouchGFX/generated/gui_generated/src/common/FrontendApplicationBase.o 

CPP_DEPS += \
./TouchGFX/generated/gui_generated/src/common/FrontendApplicationBase.d 


# Each subdirectory must supply rules for building sources it contributes
TouchGFX/generated/gui_generated/src/common/%.o TouchGFX/generated/gui_generated/src/common/%.su TouchGFX/generated/gui_generated/src/common/%.cyclo: ../TouchGFX/generated/gui_generated/src/common/%.cpp TouchGFX/generated/gui_generated/src/common/subdir.mk
	arm-none-eabi-g++ "$<" -mcpu=cortex-m4 -std=gnu++14 -DUSE_HAL_DRIVER -DSTM32F446xx -c -I../Core/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -I"/$/PRJ-SEMB/STM32IDE/Multiparameter_Monitor/TouchGFX" -I"C:/Users/lucas/OneDrive/Documentos/Faculdade/6 Semestre/SEMB1/PRJ-SEMB/STM32IDE/Multiparameter_Monitor/TouchGFX" -Os -ffunction-sections -fdata-sections -fno-exceptions -fno-rtti -fno-use-cxa-atexit -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-TouchGFX-2f-generated-2f-gui_generated-2f-src-2f-common

clean-TouchGFX-2f-generated-2f-gui_generated-2f-src-2f-common:
	-$(RM) ./TouchGFX/generated/gui_generated/src/common/FrontendApplicationBase.cyclo ./TouchGFX/generated/gui_generated/src/common/FrontendApplicationBase.d ./TouchGFX/generated/gui_generated/src/common/FrontendApplicationBase.o ./TouchGFX/generated/gui_generated/src/common/FrontendApplicationBase.su

.PHONY: clean-TouchGFX-2f-generated-2f-gui_generated-2f-src-2f-common

