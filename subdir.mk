################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../EulerProblem.cpp \
../EulerProblemFactory.cpp \
../MainApp.cpp \
../Primes.cpp \
../Summations.cpp 

OBJS += \
./EulerProblem.o \
./EulerProblemFactory.o \
./MainApp.o \
./Primes.o \
./Summations.o 

CPP_DEPS += \
./EulerProblem.d \
./EulerProblemFactory.d \
./MainApp.d \
./Primes.d \
./Summations.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<" -std=c++11
	@echo 'Finished building: $<'
	@echo ' '


