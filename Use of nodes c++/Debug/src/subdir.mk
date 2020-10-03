################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Use\ of\ nodes\ c++.cpp 

OBJS += \
./src/Use\ of\ nodes\ c++.o 

CPP_DEPS += \
./src/Use\ of\ nodes\ c++.d 


# Each subdirectory must supply rules for building sources it contributes
src/Use\ of\ nodes\ c++.o: ../src/Use\ of\ nodes\ c++.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Use of nodes c++.d" -MT"src/Use\ of\ nodes\ c++.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


