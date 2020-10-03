################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/c++\ Tutorial\ lab\ examples.cpp 

OBJS += \
./src/c++\ Tutorial\ lab\ examples.o 

CPP_DEPS += \
./src/c++\ Tutorial\ lab\ examples.d 


# Each subdirectory must supply rules for building sources it contributes
src/c++\ Tutorial\ lab\ examples.o: ../src/c++\ Tutorial\ lab\ examples.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/c++ Tutorial lab examples.d" -MT"src/c++\ Tutorial\ lab\ examples.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


