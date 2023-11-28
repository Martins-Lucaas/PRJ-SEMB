################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (11.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../TouchGFX/generated/fonts/src/ApplicationFontProvider.cpp \
../TouchGFX/generated/fonts/src/CachedFont.cpp \
../TouchGFX/generated/fonts/src/FontCache.cpp \
../TouchGFX/generated/fonts/src/Font_Asap_Regular_35_4bpp_0.cpp \
../TouchGFX/generated/fonts/src/GeneratedFont.cpp \
../TouchGFX/generated/fonts/src/Kerning_Asap_Regular_35_4bpp.cpp \
../TouchGFX/generated/fonts/src/Table_Asap_Regular_35_4bpp.cpp \
../TouchGFX/generated/fonts/src/UnmappedDataFont.cpp 

OBJS += \
./TouchGFX/generated/fonts/src/ApplicationFontProvider.o \
./TouchGFX/generated/fonts/src/CachedFont.o \
./TouchGFX/generated/fonts/src/FontCache.o \
./TouchGFX/generated/fonts/src/Font_Asap_Regular_35_4bpp_0.o \
./TouchGFX/generated/fonts/src/GeneratedFont.o \
./TouchGFX/generated/fonts/src/Kerning_Asap_Regular_35_4bpp.o \
./TouchGFX/generated/fonts/src/Table_Asap_Regular_35_4bpp.o \
./TouchGFX/generated/fonts/src/UnmappedDataFont.o 

CPP_DEPS += \
./TouchGFX/generated/fonts/src/ApplicationFontProvider.d \
./TouchGFX/generated/fonts/src/CachedFont.d \
./TouchGFX/generated/fonts/src/FontCache.d \
./TouchGFX/generated/fonts/src/Font_Asap_Regular_35_4bpp_0.d \
./TouchGFX/generated/fonts/src/GeneratedFont.d \
./TouchGFX/generated/fonts/src/Kerning_Asap_Regular_35_4bpp.d \
./TouchGFX/generated/fonts/src/Table_Asap_Regular_35_4bpp.d \
./TouchGFX/generated/fonts/src/UnmappedDataFont.d 


# Each subdirectory must supply rules for building sources it contributes
TouchGFX/generated/fonts/src/%.o TouchGFX/generated/fonts/src/%.su TouchGFX/generated/fonts/src/%.cyclo: ../TouchGFX/generated/fonts/src/%.cpp TouchGFX/generated/fonts/src/subdir.mk
	arm-none-eabi-g++ "$<" -mcpu=cortex-m4 -std=gnu++14 -DUSE_HAL_DRIVER -DSTM32F446xx -c -I../Core/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -I"/$/PRJ-SEMB/STM32IDE/Multiparameter_Monitor/TouchGFX" -I"C:/Users/lucas/OneDrive/Documentos/Faculdade/6 Semestre/SEMB1/PRJ-SEMB/STM32IDE/Multiparameter_Monitor/TouchGFX" -Os -ffunction-sections -fdata-sections -fno-exceptions -fno-rtti -fno-use-cxa-atexit -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-TouchGFX-2f-generated-2f-fonts-2f-src

clean-TouchGFX-2f-generated-2f-fonts-2f-src:
	-$(RM) ./TouchGFX/generated/fonts/src/ApplicationFontProvider.cyclo ./TouchGFX/generated/fonts/src/ApplicationFontProvider.d ./TouchGFX/generated/fonts/src/ApplicationFontProvider.o ./TouchGFX/generated/fonts/src/ApplicationFontProvider.su ./TouchGFX/generated/fonts/src/CachedFont.cyclo ./TouchGFX/generated/fonts/src/CachedFont.d ./TouchGFX/generated/fonts/src/CachedFont.o ./TouchGFX/generated/fonts/src/CachedFont.su ./TouchGFX/generated/fonts/src/FontCache.cyclo ./TouchGFX/generated/fonts/src/FontCache.d ./TouchGFX/generated/fonts/src/FontCache.o ./TouchGFX/generated/fonts/src/FontCache.su ./TouchGFX/generated/fonts/src/Font_Asap_Regular_35_4bpp_0.cyclo ./TouchGFX/generated/fonts/src/Font_Asap_Regular_35_4bpp_0.d ./TouchGFX/generated/fonts/src/Font_Asap_Regular_35_4bpp_0.o ./TouchGFX/generated/fonts/src/Font_Asap_Regular_35_4bpp_0.su ./TouchGFX/generated/fonts/src/GeneratedFont.cyclo ./TouchGFX/generated/fonts/src/GeneratedFont.d ./TouchGFX/generated/fonts/src/GeneratedFont.o ./TouchGFX/generated/fonts/src/GeneratedFont.su ./TouchGFX/generated/fonts/src/Kerning_Asap_Regular_35_4bpp.cyclo ./TouchGFX/generated/fonts/src/Kerning_Asap_Regular_35_4bpp.d ./TouchGFX/generated/fonts/src/Kerning_Asap_Regular_35_4bpp.o ./TouchGFX/generated/fonts/src/Kerning_Asap_Regular_35_4bpp.su ./TouchGFX/generated/fonts/src/Table_Asap_Regular_35_4bpp.cyclo ./TouchGFX/generated/fonts/src/Table_Asap_Regular_35_4bpp.d ./TouchGFX/generated/fonts/src/Table_Asap_Regular_35_4bpp.o ./TouchGFX/generated/fonts/src/Table_Asap_Regular_35_4bpp.su ./TouchGFX/generated/fonts/src/UnmappedDataFont.cyclo ./TouchGFX/generated/fonts/src/UnmappedDataFont.d ./TouchGFX/generated/fonts/src/UnmappedDataFont.o ./TouchGFX/generated/fonts/src/UnmappedDataFont.su

.PHONY: clean-TouchGFX-2f-generated-2f-fonts-2f-src

