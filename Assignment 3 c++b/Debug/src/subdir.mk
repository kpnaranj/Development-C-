################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Assignment\ 3\ c++b.cpp 

OBJS += \
./src/Assignment\ 3\ c++b.o 

CPP_DEPS += \
./src/Assignment\ 3\ c++b.d 


# Each subdirectory must supply rules for building sources it contributes
src/Assignment\ 3\ c++b.o: ../src/Assignment\ 3\ c++b.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Assignment 3 c++b.d" -MT"src/Assignment\ 3\ c++b.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


