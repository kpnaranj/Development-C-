################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/two\ dimensional\ array.cpp 

OBJS += \
./src/two\ dimensional\ array.o 

CPP_DEPS += \
./src/two\ dimensional\ array.d 


# Each subdirectory must supply rules for building sources it contributes
src/two\ dimensional\ array.o: ../src/two\ dimensional\ array.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/two dimensional array.d" -MT"src/two\ dimensional\ array.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


