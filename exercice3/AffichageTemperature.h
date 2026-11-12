/*
 * AffichageTemperature.h
 *
 *  Created on: 12 nov. 2026
 *      Author: Admin
 */

#ifndef EXERCICE3_AFFICHAGETEMPERATURE_H_
#define EXERCICE3_AFFICHAGETEMPERATURE_H_

#include "Observateur.h"

class AffichageTemperature : public Observateur {
public:
    void mettreAjour(double temperature, double humidite, double pression) override;
};
#endif /* EXERCICE3_AFFICHAGETEMPERATURE_H_ */
