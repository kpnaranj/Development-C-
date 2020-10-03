################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/recursion\ memory\ safe.cpp 

OBJS += \
./src/recursion\ memory\ safe.o 

CPP_DEPS += \
./src/recursion\ memory\ safe.d 


# Each subdirectory must supply rules for building sources it contributes
src/recursion\ memory\ safe.o: ../src/recursion\ memory\ safe.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/recursion memory safe.d" -MT"src/recursion\ memory\ safe.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


