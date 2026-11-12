/*
 * TriDecroissant.cpp
 *
 *  Created on: 12 nov. 2026
 *      Author: Admin
 */

#include "TriDecroissant.h"

#include <algorithm>
#include <functional>

void TriDecroissant::trier(std::vector<std::string>& donnees) const {
    std::sort(donnees.begin(), donnees.end(), std::greater<std::string>());
}

