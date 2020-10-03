################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Total\ expenses.cpp 

OBJS += \
./src/Total\ expenses.o 

CPP_DEPS += \
./src/Total\ expenses.d 


# Each subdirectory must supply rules for building sources it contributes
src/Total\ expenses.o: ../src/Total\ expenses.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Total expenses.d" -MT"src/Total\ expenses.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


