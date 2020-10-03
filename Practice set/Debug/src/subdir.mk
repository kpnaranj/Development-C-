################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Practice\ set.cpp 

OBJS += \
./src/Practice\ set.o 

CPP_DEPS += \
./src/Practice\ set.d 


# Each subdirectory must supply rules for building sources it contributes
src/Practice\ set.o: ../src/Practice\ set.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Practice set.d" -MT"src/Practice\ set.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


