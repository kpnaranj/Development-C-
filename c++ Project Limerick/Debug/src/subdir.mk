################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/c++\ Project\ Limerick.cpp 

OBJS += \
./src/c++\ Project\ Limerick.o 

CPP_DEPS += \
./src/c++\ Project\ Limerick.d 


# Each subdirectory must supply rules for building sources it contributes
src/c++\ Project\ Limerick.o: ../src/c++\ Project\ Limerick.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/c++ Project Limerick.d" -MT"src/c++\ Project\ Limerick.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


