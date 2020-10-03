################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Project\ part\ b.cpp 

OBJS += \
./src/Project\ part\ b.o 

CPP_DEPS += \
./src/Project\ part\ b.d 


# Each subdirectory must supply rules for building sources it contributes
src/Project\ part\ b.o: ../src/Project\ part\ b.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Project part b.d" -MT"src/Project\ part\ b.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


