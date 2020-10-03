################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/guess\ thing\ tutorial.cpp 

OBJS += \
./src/guess\ thing\ tutorial.o 

CPP_DEPS += \
./src/guess\ thing\ tutorial.d 


# Each subdirectory must supply rules for building sources it contributes
src/guess\ thing\ tutorial.o: ../src/guess\ thing\ tutorial.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/guess thing tutorial.d" -MT"src/guess\ thing\ tutorial.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


