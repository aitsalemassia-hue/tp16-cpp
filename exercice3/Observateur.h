/*
 * Observateur.h
 *
 *  Created on: 12 nov. 2026
 *      Author: Admin
 */

#ifndef EXERCICE3_OBSERVATEUR_H_
#define EXERCICE3_OBSERVATEUR_H_

class Observateur {
public:

	virtual ~Observateur(){};
	virtual void mettreAjour(double temperature, double humidite,double pression)=0;
};

#endif /* EXERCICE3_OBSERVATEUR_H_ */
