/*
 * GestionnaireTri.h
 *
 *  Created on: 12 nov. 2026
 *      Author: Admin
 */

#ifndef EXERCICE4_GESTIONNAIRETRI_H_
#define EXERCICE4_GESTIONNAIRETRI_H_

#include <vector>
#include <string>
#include "StrategieTri.h"

class GestionnaireTri {
private:

    const StrategieTri* strategie;

public:
    GestionnaireTri(const StrategieTri* s = nullptr);


    void setStrategie(const StrategieTri* s);


    void trier(std::vector<std::string>& donnees) const;
};

#endif /* EXERCICE4_GESTIONNAIRETRI_H_ */
