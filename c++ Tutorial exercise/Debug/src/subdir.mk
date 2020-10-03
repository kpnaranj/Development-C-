################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/c++\ Tutorial\ exercise.cpp 

OBJS += \
./src/c++\ Tutorial\ exercise.o 

CPP_DEPS += \
./src/c++\ Tutorial\ exercise.d 


# Each subdirectory must supply rules for building sources it contributes
src/c++\ Tutorial\ exercise.o: ../src/c++\ Tutorial\ exercise.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/c++ Tutorial exercise.d" -MT"src/c++\ Tutorial\ exercise.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


