################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Numero\ de\ bites\ para\ declaracion.cpp 

OBJS += \
./src/Numero\ de\ bites\ para\ declaracion.o 

CPP_DEPS += \
./src/Numero\ de\ bites\ para\ declaracion.d 


# Each subdirectory must supply rules for building sources it contributes
src/Numero\ de\ bites\ para\ declaracion.o: ../src/Numero\ de\ bites\ para\ declaracion.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Numero de bites para declaracion.d" -MT"src/Numero\ de\ bites\ para\ declaracion.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


