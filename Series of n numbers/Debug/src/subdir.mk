################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Series\ of\ n\ numbers.cpp 

OBJS += \
./src/Series\ of\ n\ numbers.o 

CPP_DEPS += \
./src/Series\ of\ n\ numbers.d 


# Each subdirectory must supply rules for building sources it contributes
src/Series\ of\ n\ numbers.o: ../src/Series\ of\ n\ numbers.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Series of n numbers.d" -MT"src/Series\ of\ n\ numbers.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


