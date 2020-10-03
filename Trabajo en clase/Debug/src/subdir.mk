################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Trabajo\ en\ clase.cpp 

OBJS += \
./src/Trabajo\ en\ clase.o 

CPP_DEPS += \
./src/Trabajo\ en\ clase.d 


# Each subdirectory must supply rules for building sources it contributes
src/Trabajo\ en\ clase.o: ../src/Trabajo\ en\ clase.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Trabajo en clase.d" -MT"src/Trabajo\ en\ clase.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


