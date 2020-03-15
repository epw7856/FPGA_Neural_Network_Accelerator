################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/Top/xtop.c \
../src/Top/xtop_linux.c \
../src/Top/xtop_sinit.c 

OBJS += \
./src/Top/xtop.o \
./src/Top/xtop_linux.o \
./src/Top/xtop_sinit.o 

C_DEPS += \
./src/Top/xtop.d \
./src/Top/xtop_linux.d \
./src/Top/xtop_sinit.d 


# Each subdirectory must supply rules for building sources it contributes
src/Top/%.o: ../src/Top/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: ARM v8 g++ compiler'
	aarch64-none-elf-g++ -Wall -O0 -g3 -c -fmessage-length=0 -MT"$@" -I../../FPGA_CNN_SDK_bsp/psu_cortexa53_0/include -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


