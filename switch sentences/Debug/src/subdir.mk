################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/switch\ sentences.cpp 

OBJS += \
./src/switch\ sentences.o 

CPP_DEPS += \
./src/switch\ sentences.d 


# Each subdirectory must supply rules for building sources it contributes
src/switch\ sentences.o: ../src/switch\ sentences.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/switch sentences.d" -MT"src/switch\ sentences.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


