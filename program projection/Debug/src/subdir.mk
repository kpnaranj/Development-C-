################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/program\ projection.cpp 

OBJS += \
./src/program\ projection.o 

CPP_DEPS += \
./src/program\ projection.d 


# Each subdirectory must supply rules for building sources it contributes
src/program\ projection.o: ../src/program\ projection.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/program projection.d" -MT"src/program\ projection.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


