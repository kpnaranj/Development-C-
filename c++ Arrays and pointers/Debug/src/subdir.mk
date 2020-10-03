################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/c++\ Arrays\ and\ pointers.cpp 

OBJS += \
./src/c++\ Arrays\ and\ pointers.o 

CPP_DEPS += \
./src/c++\ Arrays\ and\ pointers.d 


# Each subdirectory must supply rules for building sources it contributes
src/c++\ Arrays\ and\ pointers.o: ../src/c++\ Arrays\ and\ pointers.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/c++ Arrays and pointers.d" -MT"src/c++\ Arrays\ and\ pointers.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


