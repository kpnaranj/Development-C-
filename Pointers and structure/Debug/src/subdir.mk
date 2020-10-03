################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Pointers\ and\ structure.cpp 

OBJS += \
./src/Pointers\ and\ structure.o 

CPP_DEPS += \
./src/Pointers\ and\ structure.d 


# Each subdirectory must supply rules for building sources it contributes
src/Pointers\ and\ structure.o: ../src/Pointers\ and\ structure.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Pointers and structure.d" -MT"src/Pointers\ and\ structure.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


