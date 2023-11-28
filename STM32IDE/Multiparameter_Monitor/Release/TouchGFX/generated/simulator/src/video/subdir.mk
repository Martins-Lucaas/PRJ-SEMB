################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (11.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../TouchGFX/generated/simulator/src/video/SoftwareMJPEGDecoder.cpp 

OBJS += \
./TouchGFX/generated/simulator/src/video/SoftwareMJPEGDecoder.o 

CPP_DEPS += \
./TouchGFX/generated/simulator/src/video/SoftwareMJPEGDecoder.d 


# Each subdirectory must supply rules for building sources it contributes
TouchGFX/generated/simulator/src/video/%.o TouchGFX/generated/simulator/src/video/%.su TouchGFX/generated/simulator/src/video/%.cyclo: ../TouchGFX/generated/simulator/src/video/%.cpp TouchGFX/generated/simulator/src/video/subdir.mk
	arm-none-eabi-g++ "$<" -mcpu=cortex-m4 -std=gnu++14 -DUSE_HAL_DRIVER -DSTM32F446xx -c -I../Core/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -I"/$/PRJ-SEMB/STM32IDE/Multiparameter_Monitor/TouchGFX" -I"C:/Users/lucas/OneDrive/Documentos/Faculdade/6 Semestre/SEMB1/PRJ-SEMB/STM32IDE/Multiparameter_Monitor/TouchGFX" -Os -ffunction-sections -fdata-sections -fno-exceptions -fno-rtti -fno-use-cxa-atexit -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-TouchGFX-2f-generated-2f-simulator-2f-src-2f-video

clean-TouchGFX-2f-generated-2f-simulator-2f-src-2f-video:
	-$(RM) ./TouchGFX/generated/simulator/src/video/SoftwareMJPEGDecoder.cyclo ./TouchGFX/generated/simulator/src/video/SoftwareMJPEGDecoder.d ./TouchGFX/generated/simulator/src/video/SoftwareMJPEGDecoder.o ./TouchGFX/generated/simulator/src/video/SoftwareMJPEGDecoder.su

.PHONY: clean-TouchGFX-2f-generated-2f-simulator-2f-src-2f-video

