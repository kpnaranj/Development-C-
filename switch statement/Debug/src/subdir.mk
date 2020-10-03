################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/switch\ statement.cpp 

OBJS += \
./src/switch\ statement.o 

CPP_DEPS += \
./src/switch\ statement.d 


# Each subdirectory must supply rules for building sources it contributes
src/switch\ statement.o: ../src/switch\ statement.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/switch statement.d" -MT"src/switch\ statement.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


