################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/function\ areas\ and\ parameters.cpp 

OBJS += \
./src/function\ areas\ and\ parameters.o 

CPP_DEPS += \
./src/function\ areas\ and\ parameters.d 


# Each subdirectory must supply rules for building sources it contributes
src/function\ areas\ and\ parameters.o: ../src/function\ areas\ and\ parameters.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/function areas and parameters.d" -MT"src/function\ areas\ and\ parameters.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


