################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/c++\ Tutorial\ 11\ Catetos.cpp 

OBJS += \
./src/c++\ Tutorial\ 11\ Catetos.o 

CPP_DEPS += \
./src/c++\ Tutorial\ 11\ Catetos.d 


# Each subdirectory must supply rules for building sources it contributes
src/c++\ Tutorial\ 11\ Catetos.o: ../src/c++\ Tutorial\ 11\ Catetos.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/c++ Tutorial 11 Catetos.d" -MT"src/c++\ Tutorial\ 11\ Catetos.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


