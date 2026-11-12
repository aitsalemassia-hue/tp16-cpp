/*
 * TriParLongueur.h
 *
 *  Created on: 12 nov. 2026
 *      Author: Admin
 */

#ifndef EXERCICE4_TRIPARLONGUEUR_H_
#define EXERCICE4_TRIPARLONGUEUR_H_
#include"StrategieTri.h"

class TriParLongueur :public StrategieTri{
public:
	void trier(std::vector<std::string>& donnees) const override;
};

#endif /* EXERCICE4_TRIPARLONGUEUR_H_ */
