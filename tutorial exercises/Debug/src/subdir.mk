################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/tutorial\ exercises.cpp 

OBJS += \
./src/tutorial\ exercises.o 

CPP_DEPS += \
./src/tutorial\ exercises.d 


# Each subdirectory must supply rules for building sources it contributes
src/tutorial\ exercises.o: ../src/tutorial\ exercises.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/tutorial exercises.d" -MT"src/tutorial\ exercises.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


