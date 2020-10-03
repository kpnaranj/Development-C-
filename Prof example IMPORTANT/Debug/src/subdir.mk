################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Prof\ example\ IMPORTANT.cpp 

OBJS += \
./src/Prof\ example\ IMPORTANT.o 

CPP_DEPS += \
./src/Prof\ example\ IMPORTANT.d 


# Each subdirectory must supply rules for building sources it contributes
src/Prof\ example\ IMPORTANT.o: ../src/Prof\ example\ IMPORTANT.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Prof example IMPORTANT.d" -MT"src/Prof\ example\ IMPORTANT.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


