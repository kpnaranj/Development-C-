################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/c++\ function.cpp 

OBJS += \
./src/c++\ function.o 

CPP_DEPS += \
./src/c++\ function.d 


# Each subdirectory must supply rules for building sources it contributes
src/c++\ function.o: ../src/c++\ function.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/c++ function.d" -MT"src/c++\ function.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


