#include <iostream>
#include <vector>
#include <string>
#include "GestionnaireTri.h"
#include "TriCroissant.h"
#include "TriDecroissant.h"
#include "TriParLongueur.h"

void afficher(const std::string& titre, const std::vector<std::string>& v) {
    std::cout << titre << " : ";
    for (const std::string& s : v) {
        std::cout << s << " ";
    }
    std::cout << std::endl;
}

int main() {
    const std::vector<std::string> original =
        {"clavier", "souris", "ecran", "pc portable", "Carte Memoire", "Disque Dur "};


    TriCroissant croissant;
    TriDecroissant decroissant;
    TriParLongueur parLongueur;

    GestionnaireTri gestionnaire;

    afficher("Original      ", original);

    // Test sans strategie
    std::vector<std::string> v = original;
    gestionnaire.trier(v);

    //  Tri croissant
    gestionnaire.setStrategie(&croissant);
    v = original;
    gestionnaire.trier(v);
    afficher("Croissant     ", v);

    //  Changement dynamique : tri decroissant
    gestionnaire.setStrategie(&decroissant);
    v = original;
    gestionnaire.trier(v);
    afficher("Decroissant   ", v);

    //  Changement dynamique : tri par longueur
    gestionnaire.setStrategie(&parLongueur);
    v = original;
    gestionnaire.trier(v);
    afficher("Par longueur  ", v);

    return 0;
}




