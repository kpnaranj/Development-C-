################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/programfor\ quadratic\ roots.cpp 

OBJS += \
./src/programfor\ quadratic\ roots.o 

CPP_DEPS += \
./src/programfor\ quadratic\ roots.d 


# Each subdirectory must supply rules for building sources it contributes
src/programfor\ quadratic\ roots.o: ../src/programfor\ quadratic\ roots.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/programfor quadratic roots.d" -MT"src/programfor\ quadratic\ roots.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


