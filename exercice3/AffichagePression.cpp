/*
 * AffichagePression.cpp
 *
 *  Created on: 12 nov. 2026
 *      Author: Admin
 */

#include "AffichagePression.h"

#include <iostream>

void AffichagePression::mettreAjour(double temperature, double humidite, double pression) {
    std::cout << "[Pression] " << pression << " hPa" << std::endl;
}

