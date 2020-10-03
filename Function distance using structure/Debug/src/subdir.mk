################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Function\ distance\ using\ structure.cpp 

OBJS += \
./src/Function\ distance\ using\ structure.o 

CPP_DEPS += \
./src/Function\ distance\ using\ structure.d 


# Each subdirectory must supply rules for building sources it contributes
src/Function\ distance\ using\ structure.o: ../src/Function\ distance\ using\ structure.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Function distance using structure.d" -MT"src/Function\ distance\ using\ structure.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


