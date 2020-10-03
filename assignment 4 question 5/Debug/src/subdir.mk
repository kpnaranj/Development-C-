################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/assignment\ 4\ question\ 5.cpp 

OBJS += \
./src/assignment\ 4\ question\ 5.o 

CPP_DEPS += \
./src/assignment\ 4\ question\ 5.d 


# Each subdirectory must supply rules for building sources it contributes
src/assignment\ 4\ question\ 5.o: ../src/assignment\ 4\ question\ 5.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/assignment 4 question 5.d" -MT"src/assignment\ 4\ question\ 5.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


