/*
 * FabriqueForme.cpp
 *
 *  Created on: 11 nov. 2026
 *      Author: Admin
 */

#include "FabriqueForme.h"
#include "Cercle.h"
#include "Carre.h"
#include "Triangle.h"

Forme* FabriqueForme::creerForme(const std::string& type) {
	if (type == "cercle") {
		return new Cercle();
	} else if (type == "carre") {
		return new Carre();
	} else if (type == "triangle") {
		return new Triangle();
	}
	return nullptr;
}
