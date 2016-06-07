################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 

# All Target
all: 15_puzzle

# Tool invocations
15_puzzle: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: Cross GCC Linker'
	gcc -L"C:\Users\kazuma\Downloads\15_puzzle\15_puzzle" -o "15_puzzle" $(OBJS) $(USER_OBJS) $(LIBS) `pkg-config --libs gtk+-2.0` -rdynamic
	@echo 'Finished building target: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(EXECUTABLES)$(OBJS)$(C_DEPS) 15_puzzle
	-@echo ' '

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
