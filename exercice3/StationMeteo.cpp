#include "StationMeteo.h"
#include <algorithm>

StationMeteo::StationMeteo()
    : temperature(0.0), humidite(0.0), pression(0.0) {}

void StationMeteo::ajouterObservateur(Observateur* obs) {
    if (obs != nullptr) {
        observateurs.push_back(obs);
    }
}

void StationMeteo::retirerObservateur(Observateur* obs) {
    observateurs.erase(
        std::remove(observateurs.begin(), observateurs.end(), obs),
        observateurs.end());
}

void StationMeteo::notifierObservateurs() const {
    for (Observateur* obs : observateurs) {
        obs->mettreAjour(temperature, humidite, pression);
    }
}

void StationMeteo::setMesures(double temp, double hum, double pres) {
    temperature = temp;
    humidite = hum;
    pression = pres;
    notifierObservateurs();
}
