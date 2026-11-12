/*
 * Carre.h
 *
 *  Created on: 11 nov. 2026
 *      Author: Admin
 */

#ifndef EXERCICE2_CARRE_H_
#define EXERCICE2_CARRE_H_
#include "Forme.h"
class Carre : public Forme{
private:
	double cote;

public:
	Carre(double c=1.0);
	void afficher() const override;

};

#endif /* EXERCICE2_CARRE_H_ */
