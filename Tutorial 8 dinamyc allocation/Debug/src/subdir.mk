################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Tutorial\ 8\ dinamyc\ allocation.cpp 

OBJS += \
./src/Tutorial\ 8\ dinamyc\ allocation.o 

CPP_DEPS += \
./src/Tutorial\ 8\ dinamyc\ allocation.d 


# Each subdirectory must supply rules for building sources it contributes
src/Tutorial\ 8\ dinamyc\ allocation.o: ../src/Tutorial\ 8\ dinamyc\ allocation.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Tutorial 8 dinamyc allocation.d" -MT"src/Tutorial\ 8\ dinamyc\ allocation.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


