################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Ejercicio2\ bolling.cpp 

OBJS += \
./src/Ejercicio2\ bolling.o 

CPP_DEPS += \
./src/Ejercicio2\ bolling.d 


# Each subdirectory must supply rules for building sources it contributes
src/Ejercicio2\ bolling.o: ../src/Ejercicio2\ bolling.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Ejercicio2 bolling.d" -MT"src/Ejercicio2\ bolling.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


