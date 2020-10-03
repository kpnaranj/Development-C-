################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Tutorial\ c++.cpp 

OBJS += \
./src/Tutorial\ c++.o 

CPP_DEPS += \
./src/Tutorial\ c++.d 


# Each subdirectory must supply rules for building sources it contributes
src/Tutorial\ c++.o: ../src/Tutorial\ c++.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Tutorial c++.d" -MT"src/Tutorial\ c++.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


