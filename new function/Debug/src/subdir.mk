################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/new\ function.cpp 

OBJS += \
./src/new\ function.o 

CPP_DEPS += \
./src/new\ function.d 


# Each subdirectory must supply rules for building sources it contributes
src/new\ function.o: ../src/new\ function.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/new function.d" -MT"src/new\ function.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


