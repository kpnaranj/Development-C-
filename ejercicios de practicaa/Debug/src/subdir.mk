################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/ejercicios\ de\ practicaa.cpp 

OBJS += \
./src/ejercicios\ de\ practicaa.o 

CPP_DEPS += \
./src/ejercicios\ de\ practicaa.d 


# Each subdirectory must supply rules for building sources it contributes
src/ejercicios\ de\ practicaa.o: ../src/ejercicios\ de\ practicaa.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/ejercicios de practicaa.d" -MT"src/ejercicios\ de\ practicaa.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


