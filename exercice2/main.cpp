
#include <iostream>
#include "Forme.h"
#include "FabriqueForme.h"
#include "FabriqueAbstraite.h"
#include "FabriquesConcretes.h"

void utiliserFabrique(const FabriqueAbstraite& fab) {
    Forme* f = fab.creer();
    f->afficher();
    delete f;
}

int main() {
    std::cout << " FabriqueForme " << std::endl;
    const char* types[] = {"cercle", "carre", "triangle", "losange"};
    for (const char* t : types) {
        Forme* f = FabriqueForme::creerForme(t);
        if (f != nullptr) {
            f->afficher();
            delete f;
        } else {
            std::cout << "Type inconnu : " << t << std::endl;
        }
    }


    std::cout << " FabriqueAbstraite " << std::endl;
    FabriqueCercle fc;
    FabriqueCarre fca;
    FabriqueTriangle ft;


    utiliserFabrique(fc);
    utiliserFabrique(fca);
    utiliserFabrique(ft);

    return 0;
}



