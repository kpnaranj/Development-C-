################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Exercise\ tutorial.cpp 

OBJS += \
./src/Exercise\ tutorial.o 

CPP_DEPS += \
./src/Exercise\ tutorial.d 


# Each subdirectory must supply rules for building sources it contributes
src/Exercise\ tutorial.o: ../src/Exercise\ tutorial.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Exercise tutorial.d" -MT"src/Exercise\ tutorial.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


