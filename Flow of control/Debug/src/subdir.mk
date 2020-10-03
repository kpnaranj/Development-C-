################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Flow\ of\ control.cpp 

OBJS += \
./src/Flow\ of\ control.o 

CPP_DEPS += \
./src/Flow\ of\ control.d 


# Each subdirectory must supply rules for building sources it contributes
src/Flow\ of\ control.o: ../src/Flow\ of\ control.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Flow of control.d" -MT"src/Flow\ of\ control.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


