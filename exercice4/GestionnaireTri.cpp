#include "GestionnaireTri.h"
#include <iostream>

GestionnaireTri::GestionnaireTri(const StrategieTri* s) : strategie(s) {}

void GestionnaireTri::setStrategie(const StrategieTri* s) {
    strategie = s;
}

void GestionnaireTri::trier(std::vector<std::string>& donnees) const {
    if (strategie != nullptr) {
        strategie->trier(donnees);
    } else {
        std::cout << "Aucune strategie definie : tri impossible." << std::endl;
    }
}

