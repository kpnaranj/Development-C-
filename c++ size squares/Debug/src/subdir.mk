################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/c++\ size\ squares.cpp 

OBJS += \
./src/c++\ size\ squares.o 

CPP_DEPS += \
./src/c++\ size\ squares.d 


# Each subdirectory must supply rules for building sources it contributes
src/c++\ size\ squares.o: ../src/c++\ size\ squares.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/c++ size squares.d" -MT"src/c++\ size\ squares.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


