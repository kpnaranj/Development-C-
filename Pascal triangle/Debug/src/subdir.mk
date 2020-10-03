################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Pascal\ triangle.cpp 

OBJS += \
./src/Pascal\ triangle.o 

CPP_DEPS += \
./src/Pascal\ triangle.d 


# Each subdirectory must supply rules for building sources it contributes
src/Pascal\ triangle.o: ../src/Pascal\ triangle.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Pascal triangle.d" -MT"src/Pascal\ triangle.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


