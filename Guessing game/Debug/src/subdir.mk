################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Guessing\ game.cpp 

OBJS += \
./src/Guessing\ game.o 

CPP_DEPS += \
./src/Guessing\ game.d 


# Each subdirectory must supply rules for building sources it contributes
src/Guessing\ game.o: ../src/Guessing\ game.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Guessing game.d" -MT"src/Guessing\ game.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


