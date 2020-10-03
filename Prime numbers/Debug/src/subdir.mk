################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Prime\ numbers.cpp 

OBJS += \
./src/Prime\ numbers.o 

CPP_DEPS += \
./src/Prime\ numbers.d 


# Each subdirectory must supply rules for building sources it contributes
src/Prime\ numbers.o: ../src/Prime\ numbers.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Prime numbers.d" -MT"src/Prime\ numbers.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


