#include <iostream>
#include "StationMeteo.h"
#include "AffichageTemperature.h"
#include "AffichageHumidite.h"
#include "AffichagePression.h"

int main() {
    StationMeteo station;


    AffichageTemperature affTemp;
    AffichageHumidite affHum;
    AffichagePression affPres;


    station.ajouterObservateur(&affTemp);
    station.ajouterObservateur(&affHum);
    station.ajouterObservateur(&affPres);

    std::cout << " Mesure 1 (3 observateurs)" << std::endl;
    station.setMesures(25.5, 60.0, 1013.0);

    // Desinscription dynamique de l'affichage humidite
    station.retirerObservateur(&affHum);

    std::cout << "\n Mesure 2 (humidite retiree) " << std::endl;
    station.setMesures(27.0, 55.0, 1010.0);

    //  Reinscription
    station.ajouterObservateur(&affHum);

    std::cout << "\n Mesure 3 (humidite reinscrite) " << std::endl;
    station.setMesures(22.0, 70.0, 1008.0);

    return 0;
}



