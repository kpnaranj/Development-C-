################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/final\ question.cpp 

OBJS += \
./src/final\ question.o 

CPP_DEPS += \
./src/final\ question.d 


# Each subdirectory must supply rules for building sources it contributes
src/final\ question.o: ../src/final\ question.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/final question.d" -MT"src/final\ question.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


