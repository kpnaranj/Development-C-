################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Pascal\ triangle\ practice.cpp 

OBJS += \
./src/Pascal\ triangle\ practice.o 

CPP_DEPS += \
./src/Pascal\ triangle\ practice.d 


# Each subdirectory must supply rules for building sources it contributes
src/Pascal\ triangle\ practice.o: ../src/Pascal\ triangle\ practice.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Pascal triangle practice.d" -MT"src/Pascal\ triangle\ practice.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


