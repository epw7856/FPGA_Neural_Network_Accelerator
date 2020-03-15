################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/TmrCtr/xtmrctr.c \
../src/TmrCtr/xtmrctr_g.c \
../src/TmrCtr/xtmrctr_intr.c \
../src/TmrCtr/xtmrctr_l.c \
../src/TmrCtr/xtmrctr_options.c \
../src/TmrCtr/xtmrctr_selftest.c \
../src/TmrCtr/xtmrctr_sinit.c \
../src/TmrCtr/xtmrctr_stats.c 

OBJS += \
./src/TmrCtr/xtmrctr.o \
./src/TmrCtr/xtmrctr_g.o \
./src/TmrCtr/xtmrctr_intr.o \
./src/TmrCtr/xtmrctr_l.o \
./src/TmrCtr/xtmrctr_options.o \
./src/TmrCtr/xtmrctr_selftest.o \
./src/TmrCtr/xtmrctr_sinit.o \
./src/TmrCtr/xtmrctr_stats.o 

C_DEPS += \
./src/TmrCtr/xtmrctr.d \
./src/TmrCtr/xtmrctr_g.d \
./src/TmrCtr/xtmrctr_intr.d \
./src/TmrCtr/xtmrctr_l.d \
./src/TmrCtr/xtmrctr_options.d \
./src/TmrCtr/xtmrctr_selftest.d \
./src/TmrCtr/xtmrctr_sinit.d \
./src/TmrCtr/xtmrctr_stats.d 


# Each subdirectory must supply rules for building sources it contributes
src/TmrCtr/%.o: ../src/TmrCtr/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: ARM v8 g++ compiler'
	aarch64-none-elf-g++ -Wall -O0 -g3 -c -fmessage-length=0 -MT"$@" -I../../FPGA_CNN_SDK_bsp/psu_cortexa53_0/include -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


