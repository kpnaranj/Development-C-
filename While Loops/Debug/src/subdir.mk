################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/While\ Loops.cpp 

OBJS += \
./src/While\ Loops.o 

CPP_DEPS += \
./src/While\ Loops.d 


# Each subdirectory must supply rules for building sources it contributes
src/While\ Loops.o: ../src/While\ Loops.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/While Loops.d" -MT"src/While\ Loops.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


