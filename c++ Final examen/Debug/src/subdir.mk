################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/c++\ Final\ examen.cpp 

OBJS += \
./src/c++\ Final\ examen.o 

CPP_DEPS += \
./src/c++\ Final\ examen.d 


# Each subdirectory must supply rules for building sources it contributes
src/c++\ Final\ examen.o: ../src/c++\ Final\ examen.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/c++ Final examen.d" -MT"src/c++\ Final\ examen.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


