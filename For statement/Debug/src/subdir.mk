################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/For\ statement.cpp 

OBJS += \
./src/For\ statement.o 

CPP_DEPS += \
./src/For\ statement.d 


# Each subdirectory must supply rules for building sources it contributes
src/For\ statement.o: ../src/For\ statement.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/For statement.d" -MT"src/For\ statement.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


