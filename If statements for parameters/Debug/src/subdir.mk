################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/If\ statements\ for\ parameters.cpp 

OBJS += \
./src/If\ statements\ for\ parameters.o 

CPP_DEPS += \
./src/If\ statements\ for\ parameters.d 


# Each subdirectory must supply rules for building sources it contributes
src/If\ statements\ for\ parameters.o: ../src/If\ statements\ for\ parameters.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/If statements for parameters.d" -MT"src/If\ statements\ for\ parameters.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


