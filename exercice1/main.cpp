#include "Configuration.h"
#include <iostream>

int main() {
    Configuration* c1 = Configuration::getInstance();
    c1->setLogin("assiya");
    c1->setChemin("C:/data/application.conf");
    c1->afficher();

    Configuration* c2 = Configuration::getInstance();
    std::cout << "Meme instance ? " << (c1 == c2 ? "oui" : "non") << std::endl;



    Configuration::detruireInstance();
    return 0;
}




