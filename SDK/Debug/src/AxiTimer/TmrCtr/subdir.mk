################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/AxiTimer/TmrCtr/xtmrctr.c \
../src/AxiTimer/TmrCtr/xtmrctr_g.c \
../src/AxiTimer/TmrCtr/xtmrctr_intr.c \
../src/AxiTimer/TmrCtr/xtmrctr_l.c \
../src/AxiTimer/TmrCtr/xtmrctr_options.c \
../src/AxiTimer/TmrCtr/xtmrctr_selftest.c \
../src/AxiTimer/TmrCtr/xtmrctr_sinit.c \
../src/AxiTimer/TmrCtr/xtmrctr_stats.c 

OBJS += \
./src/AxiTimer/TmrCtr/xtmrctr.o \
./src/AxiTimer/TmrCtr/xtmrctr_g.o \
./src/AxiTimer/TmrCtr/xtmrctr_intr.o \
./src/AxiTimer/TmrCtr/xtmrctr_l.o \
./src/AxiTimer/TmrCtr/xtmrctr_options.o \
./src/AxiTimer/TmrCtr/xtmrctr_selftest.o \
./src/AxiTimer/TmrCtr/xtmrctr_sinit.o \
./src/AxiTimer/TmrCtr/xtmrctr_stats.o 

C_DEPS += \
./src/AxiTimer/TmrCtr/xtmrctr.d \
./src/AxiTimer/TmrCtr/xtmrctr_g.d \
./src/AxiTimer/TmrCtr/xtmrctr_intr.d \
./src/AxiTimer/TmrCtr/xtmrctr_l.d \
./src/AxiTimer/TmrCtr/xtmrctr_options.d \
./src/AxiTimer/TmrCtr/xtmrctr_selftest.d \
./src/AxiTimer/TmrCtr/xtmrctr_sinit.d \
./src/AxiTimer/TmrCtr/xtmrctr_stats.d 


# Each subdirectory must supply rules for building sources it contributes
src/AxiTimer/TmrCtr/%.o: ../src/AxiTimer/TmrCtr/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: ARM v8 g++ compiler'
	aarch64-none-elf-g++ -Wall -O0 -g3 -c -fmessage-length=0 -MT"$@" -I../../FPGA_CNN_SDK_bsp/psu_cortexa53_0/include -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


