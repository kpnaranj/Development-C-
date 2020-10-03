################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Digit\ numbers.cpp 

OBJS += \
./src/Digit\ numbers.o 

CPP_DEPS += \
./src/Digit\ numbers.d 


# Each subdirectory must supply rules for building sources it contributes
src/Digit\ numbers.o: ../src/Digit\ numbers.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Digit numbers.d" -MT"src/Digit\ numbers.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


