################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/AxiTimer/AxiTimer.cpp 

OBJS += \
./src/AxiTimer/AxiTimer.o 

CPP_DEPS += \
./src/AxiTimer/AxiTimer.d 


# Each subdirectory must supply rules for building sources it contributes
src/AxiTimer/%.o: ../src/AxiTimer/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: ARM v8 g++ compiler'
	aarch64-none-elf-g++ -Wall -O0 -g3 -c -fmessage-length=0 -MT"$@" -I../../FPGA_CNN_SDK_bsp/psu_cortexa53_0/include -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


