################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../exercice3/AffichageHumidite.cpp \
../exercice3/AffichagePression.cpp \
../exercice3/AffichageTemperature.cpp \
../exercice3/Observateur.cpp \
../exercice3/StationMeteo.cpp \
../exercice3/main.cpp 

CPP_DEPS += \
./exercice3/AffichageHumidite.d \
./exercice3/AffichagePression.d \
./exercice3/AffichageTemperature.d \
./exercice3/Observateur.d \
./exercice3/StationMeteo.d \
./exercice3/main.d 

OBJS += \
./exercice3/AffichageHumidite.o \
./exercice3/AffichagePression.o \
./exercice3/AffichageTemperature.o \
./exercice3/Observateur.o \
./exercice3/StationMeteo.o \
./exercice3/main.o 


# Each subdirectory must supply rules for building sources it contributes
exercice3/%.o: ../exercice3/%.cpp exercice3/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-exercice3

clean-exercice3:
	-$(RM) ./exercice3/AffichageHumidite.d ./exercice3/AffichageHumidite.o ./exercice3/AffichagePression.d ./exercice3/AffichagePression.o ./exercice3/AffichageTemperature.d ./exercice3/AffichageTemperature.o ./exercice3/Observateur.d ./exercice3/Observateur.o ./exercice3/StationMeteo.d ./exercice3/StationMeteo.o ./exercice3/main.d ./exercice3/main.o

.PHONY: clean-exercice3

