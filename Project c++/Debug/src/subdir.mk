################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Project\ c++.cpp 

OBJS += \
./src/Project\ c++.o 

CPP_DEPS += \
./src/Project\ c++.d 


# Each subdirectory must supply rules for building sources it contributes
src/Project\ c++.o: ../src/Project\ c++.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Project c++.d" -MT"src/Project\ c++.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


