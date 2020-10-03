################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/reverse\ f.cpp 

OBJS += \
./src/reverse\ f.o 

CPP_DEPS += \
./src/reverse\ f.d 


# Each subdirectory must supply rules for building sources it contributes
src/reverse\ f.o: ../src/reverse\ f.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/reverse f.d" -MT"src/reverse\ f.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


