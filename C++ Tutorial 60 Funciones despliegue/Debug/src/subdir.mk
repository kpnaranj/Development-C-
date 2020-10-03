################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/C++\ Tutorial\ 60\ Funciones\ despliegue.cpp 

OBJS += \
./src/C++\ Tutorial\ 60\ Funciones\ despliegue.o 

CPP_DEPS += \
./src/C++\ Tutorial\ 60\ Funciones\ despliegue.d 


# Each subdirectory must supply rules for building sources it contributes
src/C++\ Tutorial\ 60\ Funciones\ despliegue.o: ../src/C++\ Tutorial\ 60\ Funciones\ despliegue.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/C++ Tutorial 60 Funciones despliegue.d" -MT"src/C++\ Tutorial\ 60\ Funciones\ despliegue.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


