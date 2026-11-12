/*
 * AffichageHumidite.h
 *
 *  Created on: 12 nov. 2026
 *      Author: Admin
 */

#ifndef EXERCICE3_AFFICHAGEHUMIDITE_H_
#define EXERCICE3_AFFICHAGEHUMIDITE_H_

#include "Observateur.h"

class AffichageHumidite : public Observateur {
public:
    void mettreAjour(double temperature, double humidite, double pression) override;
};

#endif /* EXERCICE3_AFFICHAGEHUMIDITE_H_ */
