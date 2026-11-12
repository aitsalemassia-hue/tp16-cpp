/*
 * FabriqueAbstraite.h
 *
 *  Created on: 12 nov. 2026
 *      Author: Admin
 */

#ifndef EXERCICE2_FABRIQUEABSTRAITE_H_
#define EXERCICE2_FABRIQUEABSTRAITE_H_

#include "Forme.h"

class FabriqueAbstraite {
public:
    virtual ~FabriqueAbstraite() {}

    // Methode virtuelle pure : chaque fabrique concrete cree SA forme
    virtual Forme* creer() const = 0;
};




#endif /* EXERCICE2_FABRIQUEABSTRAITE_H_ */
