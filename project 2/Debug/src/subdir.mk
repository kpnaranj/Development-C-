################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/project\ 2.cpp 

OBJS += \
./src/project\ 2.o 

CPP_DEPS += \
./src/project\ 2.d 


# Each subdirectory must supply rules for building sources it contributes
src/project\ 2.o: ../src/project\ 2.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/project 2.d" -MT"src/project\ 2.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


