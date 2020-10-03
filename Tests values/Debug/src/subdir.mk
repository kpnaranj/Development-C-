################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Tests\ values.cpp 

OBJS += \
./src/Tests\ values.o 

CPP_DEPS += \
./src/Tests\ values.d 


# Each subdirectory must supply rules for building sources it contributes
src/Tests\ values.o: ../src/Tests\ values.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Tests values.d" -MT"src/Tests\ values.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


