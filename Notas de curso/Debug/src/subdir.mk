################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Notas\ de\ curso.cpp 

OBJS += \
./src/Notas\ de\ curso.o 

CPP_DEPS += \
./src/Notas\ de\ curso.d 


# Each subdirectory must supply rules for building sources it contributes
src/Notas\ de\ curso.o: ../src/Notas\ de\ curso.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Notas de curso.d" -MT"src/Notas\ de\ curso.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


