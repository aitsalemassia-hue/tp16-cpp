/*
 * Configuration.cpp
 *
 *  Created on: 11 nov. 2026
 *      Author: Admin
 */

#include "Configuration.h"

Configuration* Configuration::instance = nullptr;

Configuration::Configuration()
    : chemin("config.ini"),
      login("Assiya"),
      password("2006") {
    std::cout << "Creation de l'instance unique de Configuration" << std::endl;
}

Configuration::~Configuration() {
    std::cout << "Destruction de l'instance de Configuration" << std::endl;
}

Configuration* Configuration::getInstance() {
    if (instance == nullptr) {
        instance = new Configuration();
    }
    return instance;
}

void Configuration::detruireInstance() {
    delete instance;
    instance = nullptr;
}




void Configuration::afficher() const {
    std::cout << "Parametres de configuration " << std::endl;
    std::cout << "Chemin du fichier : " << chemin << std::endl;
    std::cout << "Utilisateur       : " << login << std::endl;
    std::cout << "Mot de passe      : " << std::string(password.size(), '*') << std::endl;
}

