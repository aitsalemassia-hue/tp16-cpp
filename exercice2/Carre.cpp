/*
 * Carre.cpp
 *
 *  Created on: 11 nov. 2026
 *      Author: Admin
 */

#include "Carre.h"
#include<iostream>
Carre::Carre(double c) : cote(c) {
	// TODO Auto-generated constructor stub

}

void Carre::afficher() const{
	std::cout<< "Carre de cote "<< cote << std::endl;
}


