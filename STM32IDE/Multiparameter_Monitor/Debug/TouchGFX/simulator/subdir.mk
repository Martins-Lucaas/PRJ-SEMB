################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (11.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../TouchGFX/simulator/main.cpp 

OBJS += \
./TouchGFX/simulator/main.o 

CPP_DEPS += \
./TouchGFX/simulator/main.d 


# Each subdirectory must supply rules for building sources it contributes
TouchGFX/simulator/%.o TouchGFX/simulator/%.su TouchGFX/simulator/%.cyclo: ../TouchGFX/simulator/%.cpp TouchGFX/simulator/subdir.mk
	arm-none-eabi-g++ "$<" -mcpu=cortex-m4 -std=gnu++14 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F446xx -c -I../Core/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -I"C:/Users/lucas/OneDrive/Documentos/Faculdade/6 Semestre/SEMB1/PRJ-SEMB/STM32IDE/Multiparameter_Monitor/TouchGFX" -I../TouchGFX/App -I../TouchGFX/target/generated -I../TouchGFX/target -O0 -ffunction-sections -fdata-sections -fno-exceptions -fno-rtti -fno-use-cxa-atexit -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-TouchGFX-2f-simulator

clean-TouchGFX-2f-simulator:
	-$(RM) ./TouchGFX/simulator/main.cyclo ./TouchGFX/simulator/main.d ./TouchGFX/simulator/main.o ./TouchGFX/simulator/main.su

.PHONY: clean-TouchGFX-2f-simulator

