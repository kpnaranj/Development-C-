################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/numero\ par\ o\ impar.cpp 

OBJS += \
./src/numero\ par\ o\ impar.o 

CPP_DEPS += \
./src/numero\ par\ o\ impar.d 


# Each subdirectory must supply rules for building sources it contributes
src/numero\ par\ o\ impar.o: ../src/numero\ par\ o\ impar.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/numero par o impar.d" -MT"src/numero\ par\ o\ impar.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


