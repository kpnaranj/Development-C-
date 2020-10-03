################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Divisible\ answer.cpp 

OBJS += \
./src/Divisible\ answer.o 

CPP_DEPS += \
./src/Divisible\ answer.d 


# Each subdirectory must supply rules for building sources it contributes
src/Divisible\ answer.o: ../src/Divisible\ answer.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Divisible answer.d" -MT"src/Divisible\ answer.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


