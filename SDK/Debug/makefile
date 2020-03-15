################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include src/Top/subdir.mk
-include src/Platform/subdir.mk
-include src/AxiTimer/TmrCtr/subdir.mk
-include src/AxiTimer/subdir.mk
-include src/AXI/subdir.mk
-include src/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(CC_DEPS)),)
-include $(CC_DEPS)
endif
ifneq ($(strip $(C_UPPER_DEPS)),)
-include $(C_UPPER_DEPS)
endif
ifneq ($(strip $(CXX_DEPS)),)
-include $(CXX_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
ifneq ($(strip $(CPP_DEPS)),)
-include $(CPP_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
ELFSIZE += \
FPGA_CNN_SDK.elf.size \


# All Target
all: FPGA_CNN_SDK.elf secondary-outputs

# Tool invocations
FPGA_CNN_SDK.elf: $(OBJS) ../src/lscript.ld $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: ARM v8 g++ linker'
	aarch64-none-elf-g++ -Wl,-T -Wl,../src/lscript.ld -L../../FPGA_CNN_SDK_bsp/psu_cortexa53_0/lib -o "FPGA_CNN_SDK.elf" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

FPGA_CNN_SDK.elf.size: FPGA_CNN_SDK.elf
	@echo 'Invoking: ARM v8 Print Size'
	aarch64-none-elf-size FPGA_CNN_SDK.elf  |tee "FPGA_CNN_SDK.elf.size"
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(CC_DEPS)$(EXECUTABLES)$(OBJS)$(C_UPPER_DEPS)$(CXX_DEPS)$(S_UPPER_DEPS)$(C_DEPS)$(CPP_DEPS)$(ELFSIZE) FPGA_CNN_SDK.elf
	-@echo ' '

secondary-outputs: $(ELFSIZE)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
