################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/c++\ Tutorial\ factores\ primos.cpp 

OBJS += \
./src/c++\ Tutorial\ factores\ primos.o 

CPP_DEPS += \
./src/c++\ Tutorial\ factores\ primos.d 


# Each subdirectory must supply rules for building sources it contributes
src/c++\ Tutorial\ factores\ primos.o: ../src/c++\ Tutorial\ factores\ primos.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/c++ Tutorial factores primos.d" -MT"src/c++\ Tutorial\ factores\ primos.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


