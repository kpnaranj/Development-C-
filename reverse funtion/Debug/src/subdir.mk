################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/reverse\ funtion.cpp 

OBJS += \
./src/reverse\ funtion.o 

CPP_DEPS += \
./src/reverse\ funtion.d 


# Each subdirectory must supply rules for building sources it contributes
src/reverse\ funtion.o: ../src/reverse\ funtion.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/reverse funtion.d" -MT"src/reverse\ funtion.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


