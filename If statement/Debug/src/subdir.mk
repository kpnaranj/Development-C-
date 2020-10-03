################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/If\ statement.cpp 

OBJS += \
./src/If\ statement.o 

CPP_DEPS += \
./src/If\ statement.d 


# Each subdirectory must supply rules for building sources it contributes
src/If\ statement.o: ../src/If\ statement.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/If statement.d" -MT"src/If\ statement.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


