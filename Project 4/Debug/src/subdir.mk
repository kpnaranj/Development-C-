################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Project\ 4.cpp 

OBJS += \
./src/Project\ 4.o 

CPP_DEPS += \
./src/Project\ 4.d 


# Each subdirectory must supply rules for building sources it contributes
src/Project\ 4.o: ../src/Project\ 4.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Project 4.d" -MT"src/Project\ 4.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


