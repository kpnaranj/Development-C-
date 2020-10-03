################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Palindrome\ exercise.cpp 

OBJS += \
./src/Palindrome\ exercise.o 

CPP_DEPS += \
./src/Palindrome\ exercise.d 


# Each subdirectory must supply rules for building sources it contributes
src/Palindrome\ exercise.o: ../src/Palindrome\ exercise.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Palindrome exercise.d" -MT"src/Palindrome\ exercise.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


