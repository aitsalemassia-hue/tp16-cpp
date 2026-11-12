/*
 * TriCroissant.h
 *
 *  Created on: 12 nov. 2026
 *      Author: Admin
 */

#ifndef EXERCICE4_TRICROISSANT_H_
#define EXERCICE4_TRICROISSANT_H_

#include "StrategieTri.h"

class TriCroissant : public StrategieTri {
public:
    void trier(std::vector<std::string>& donnees) const override;
};


#endif /* EXERCICE4_TRICROISSANT_H_ */
