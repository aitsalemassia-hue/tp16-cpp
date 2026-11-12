/*
 * Cercle.h
 *
 *  Created on: 11 nov. 2026
 *      Author: Admin
 */

#ifndef EXERCICE2_CERCLE_H_
#define EXERCICE2_CERCLE_H_
#include "Forme.h"
class Cercle :public Forme{
private:
	double rayon;

public:
	Cercle(double r=1.0);
	void afficher() const override;

};

#endif /* EXERCICE2_CERCLE_H_ */
