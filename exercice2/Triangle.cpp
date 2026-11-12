/*
 * Triangle.cpp
 *
 *  Created on: 11 nov. 2026
 *      Author: Admin
 */

#include "Triangle.h"
#include<iostream>
Triangle::Triangle(double L,double l):longeur(L),largeur(l) {


}

void Triangle::afficher() const{
	std::cout << "Triangle de base " << longeur
	              << " et de hauteur " << largeur << std::endl;
}



