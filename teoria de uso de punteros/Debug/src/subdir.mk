################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/teoria\ de\ uso\ de\ punteros.cpp 

OBJS += \
./src/teoria\ de\ uso\ de\ punteros.o 

CPP_DEPS += \
./src/teoria\ de\ uso\ de\ punteros.d 


# Each subdirectory must supply rules for building sources it contributes
src/teoria\ de\ uso\ de\ punteros.o: ../src/teoria\ de\ uso\ de\ punteros.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/teoria de uso de punteros.d" -MT"src/teoria\ de\ uso\ de\ punteros.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


