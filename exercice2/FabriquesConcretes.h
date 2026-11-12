

#ifndef EXERCICE2_FABRIQUESCONCRETES_H_
#define EXERCICE2_FABRIQUESCONCRETES_H_

#include "FabriqueAbstraite.h"
#include "Cercle.h"
#include "Carre.h"
#include "Triangle.h"

class FabriqueCercle : public FabriqueAbstraite {
public:
    Forme* creer() const override { return new Cercle(); }
};

class FabriqueCarre : public FabriqueAbstraite {
public:
    Forme* creer() const override { return new Carre(); }
};

class FabriqueTriangle : public FabriqueAbstraite {
public:
    Forme* creer() const override { return new Triangle(); }
};



#endif /* EXERCICE2_FABRIQUESCONCRETES_H_ */
