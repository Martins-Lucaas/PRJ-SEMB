################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (11.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Monitor_core/eletromio_adc.c \
../Monitor_core/max30100.c \
../Monitor_core/mlx90614.c \
../Monitor_core/monitor_main.c 

C_DEPS += \
./Monitor_core/eletromio_adc.d \
./Monitor_core/max30100.d \
./Monitor_core/mlx90614.d \
./Monitor_core/monitor_main.d 

OBJS += \
./Monitor_core/eletromio_adc.o \
./Monitor_core/max30100.o \
./Monitor_core/mlx90614.o \
./Monitor_core/monitor_main.o 


# Each subdirectory must supply rules for building sources it contributes
Monitor_core/%.o Monitor_core/%.su Monitor_core/%.cyclo: ../Monitor_core/%.c Monitor_core/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -DUSE_HAL_DRIVER -DSTM32F446xx -c -I../Core/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -I"/$/PRJ-SEMB/STM32IDE/Multiparameter_Monitor/TouchGFX" -I"C:/Users/lucas/OneDrive/Documentos/Faculdade/6 Semestre/SEMB1/PRJ-SEMB/STM32IDE/Multiparameter_Monitor/TouchGFX" -I../TouchGFX/App -I../TouchGFX/target/generated -I../TouchGFX/target -I../Middlewares/ST/touchgfx/framework/include -I../TouchGFX/generated/fonts/include -I../TouchGFX/generated/gui_generated/include -I../TouchGFX/generated/images/include -I../TouchGFX/generated/texts/include -I../TouchGFX/generated/videos/include -I../TouchGFX/gui/include -Os -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Monitor_core

clean-Monitor_core:
	-$(RM) ./Monitor_core/eletromio_adc.cyclo ./Monitor_core/eletromio_adc.d ./Monitor_core/eletromio_adc.o ./Monitor_core/eletromio_adc.su ./Monitor_core/max30100.cyclo ./Monitor_core/max30100.d ./Monitor_core/max30100.o ./Monitor_core/max30100.su ./Monitor_core/mlx90614.cyclo ./Monitor_core/mlx90614.d ./Monitor_core/mlx90614.o ./Monitor_core/mlx90614.su ./Monitor_core/monitor_main.cyclo ./Monitor_core/monitor_main.d ./Monitor_core/monitor_main.o ./Monitor_core/monitor_main.su

.PHONY: clean-Monitor_core

