################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Project\ part\ a.cpp 

OBJS += \
./src/Project\ part\ a.o 

CPP_DEPS += \
./src/Project\ part\ a.d 


# Each subdirectory must supply rules for building sources it contributes
src/Project\ part\ a.o: ../src/Project\ part\ a.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Project part a.d" -MT"src/Project\ part\ a.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


