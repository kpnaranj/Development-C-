################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/how\ to\ pass\ variables.cpp 

OBJS += \
./src/how\ to\ pass\ variables.o 

CPP_DEPS += \
./src/how\ to\ pass\ variables.d 


# Each subdirectory must supply rules for building sources it contributes
src/how\ to\ pass\ variables.o: ../src/how\ to\ pass\ variables.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/how to pass variables.d" -MT"src/how\ to\ pass\ variables.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


