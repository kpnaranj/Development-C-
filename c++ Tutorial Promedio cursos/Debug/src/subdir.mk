################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/c++\ Tutorial\ Promedio\ cursos.cpp 

OBJS += \
./src/c++\ Tutorial\ Promedio\ cursos.o 

CPP_DEPS += \
./src/c++\ Tutorial\ Promedio\ cursos.d 


# Each subdirectory must supply rules for building sources it contributes
src/c++\ Tutorial\ Promedio\ cursos.o: ../src/c++\ Tutorial\ Promedio\ cursos.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/c++ Tutorial Promedio cursos.d" -MT"src/c++\ Tutorial\ Promedio\ cursos.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


