################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/pointers\ to\ integers.cpp 

OBJS += \
./src/pointers\ to\ integers.o 

CPP_DEPS += \
./src/pointers\ to\ integers.d 


# Each subdirectory must supply rules for building sources it contributes
src/pointers\ to\ integers.o: ../src/pointers\ to\ integers.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/pointers to integers.d" -MT"src/pointers\ to\ integers.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


