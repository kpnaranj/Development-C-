################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Binary\ program\ arrays.cpp 

OBJS += \
./src/Binary\ program\ arrays.o 

CPP_DEPS += \
./src/Binary\ program\ arrays.d 


# Each subdirectory must supply rules for building sources it contributes
src/Binary\ program\ arrays.o: ../src/Binary\ program\ arrays.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Binary program arrays.d" -MT"src/Binary\ program\ arrays.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


