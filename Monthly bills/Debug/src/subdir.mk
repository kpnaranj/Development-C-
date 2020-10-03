################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Monthly\ bills.cpp 

OBJS += \
./src/Monthly\ bills.o 

CPP_DEPS += \
./src/Monthly\ bills.d 


# Each subdirectory must supply rules for building sources it contributes
src/Monthly\ bills.o: ../src/Monthly\ bills.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Monthly bills.d" -MT"src/Monthly\ bills.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


