################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/AXI/xaxidma.c \
../src/AXI/xaxidma_bd.c \
../src/AXI/xaxidma_bdring.c \
../src/AXI/xaxidma_g.c \
../src/AXI/xaxidma_selftest.c \
../src/AXI/xaxidma_sinit.c 

OBJS += \
./src/AXI/xaxidma.o \
./src/AXI/xaxidma_bd.o \
./src/AXI/xaxidma_bdring.o \
./src/AXI/xaxidma_g.o \
./src/AXI/xaxidma_selftest.o \
./src/AXI/xaxidma_sinit.o 

C_DEPS += \
./src/AXI/xaxidma.d \
./src/AXI/xaxidma_bd.d \
./src/AXI/xaxidma_bdring.d \
./src/AXI/xaxidma_g.d \
./src/AXI/xaxidma_selftest.d \
./src/AXI/xaxidma_sinit.d 


# Each subdirectory must supply rules for building sources it contributes
src/AXI/%.o: ../src/AXI/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: ARM v8 g++ compiler'
	aarch64-none-elf-g++ -Wall -O0 -g3 -c -fmessage-length=0 -MT"$@" -I../../FPGA_CNN_SDK_bsp/psu_cortexa53_0/include -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


