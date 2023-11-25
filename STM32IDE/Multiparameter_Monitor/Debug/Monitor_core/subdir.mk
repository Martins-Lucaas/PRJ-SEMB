################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (11.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Monitor_core/adc_emg.c \
../Monitor_core/max30102_for_stm32_hal.c \
../Monitor_core/mlx90614.c \
../Monitor_core/monitor_main.c \
../Monitor_core/pwm_io.c 

C_DEPS += \
./Monitor_core/adc_emg.d \
./Monitor_core/max30102_for_stm32_hal.d \
./Monitor_core/mlx90614.d \
./Monitor_core/monitor_main.d \
./Monitor_core/pwm_io.d 

OBJS += \
./Monitor_core/adc_emg.o \
./Monitor_core/max30102_for_stm32_hal.o \
./Monitor_core/mlx90614.o \
./Monitor_core/monitor_main.o \
./Monitor_core/pwm_io.o 


# Each subdirectory must supply rules for building sources it contributes
Monitor_core/%.o Monitor_core/%.su Monitor_core/%.cyclo: ../Monitor_core/%.c Monitor_core/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F446xx -c -I../Core/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Monitor_core

clean-Monitor_core:
	-$(RM) ./Monitor_core/adc_emg.cyclo ./Monitor_core/adc_emg.d ./Monitor_core/adc_emg.o ./Monitor_core/adc_emg.su ./Monitor_core/max30102_for_stm32_hal.cyclo ./Monitor_core/max30102_for_stm32_hal.d ./Monitor_core/max30102_for_stm32_hal.o ./Monitor_core/max30102_for_stm32_hal.su ./Monitor_core/mlx90614.cyclo ./Monitor_core/mlx90614.d ./Monitor_core/mlx90614.o ./Monitor_core/mlx90614.su ./Monitor_core/monitor_main.cyclo ./Monitor_core/monitor_main.d ./Monitor_core/monitor_main.o ./Monitor_core/monitor_main.su ./Monitor_core/pwm_io.cyclo ./Monitor_core/pwm_io.d ./Monitor_core/pwm_io.o ./Monitor_core/pwm_io.su

.PHONY: clean-Monitor_core

