################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../exercice4/GestionnaireTri.cpp \
../exercice4/TriCroissant.cpp \
../exercice4/TriDecroissant.cpp \
../exercice4/TriParLongueur.cpp \
../exercice4/main.cpp 

CPP_DEPS += \
./exercice4/GestionnaireTri.d \
./exercice4/TriCroissant.d \
./exercice4/TriDecroissant.d \
./exercice4/TriParLongueur.d \
./exercice4/main.d 

OBJS += \
./exercice4/GestionnaireTri.o \
./exercice4/TriCroissant.o \
./exercice4/TriDecroissant.o \
./exercice4/TriParLongueur.o \
./exercice4/main.o 


# Each subdirectory must supply rules for building sources it contributes
exercice4/%.o: ../exercice4/%.cpp exercice4/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-exercice4

clean-exercice4:
	-$(RM) ./exercice4/GestionnaireTri.d ./exercice4/GestionnaireTri.o ./exercice4/TriCroissant.d ./exercice4/TriCroissant.o ./exercice4/TriDecroissant.d ./exercice4/TriDecroissant.o ./exercice4/TriParLongueur.d ./exercice4/TriParLongueur.o ./exercice4/main.d ./exercice4/main.o

.PHONY: clean-exercice4

