/*
 * Cercle.cpp
 *
 *  Created on: 11 nov. 2026
 *      Author: Admin
 */

#include "Cercle.h"
#include<iostream>
#include<string>

Cercle::Cercle(double r):rayon(r) {


}
void Cercle::afficher() const{
	std::cout << " Cercle de rayon "<< rayon <<std::endl;
}



