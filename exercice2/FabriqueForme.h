/*
 * FabriqueForme.h
 *
 *  Created on: 11 nov. 2026
 *      Author: Admin
 */

#ifndef EXERCICE2_FABRIQUEFORME_H_
#define EXERCICE2_FABRIQUEFORME_H_
#include <string>
#include "Forme.h"
class FabriqueForme {
public:
	static Forme* creerForme(const std::string& type);
};

#endif /* EXERCICE2_FABRIQUEFORME_H_ */
