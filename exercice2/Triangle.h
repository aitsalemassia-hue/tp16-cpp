

#ifndef EXERCICE2_TRIANGLE_H_
#define EXERCICE2_TRIANGLE_H_
#include "Forme.h"
class Triangle :public Forme{
private:
	double longeur;
	double largeur;
public:
	Triangle(double L=1.0, double l=1.0);
	void afficher() const override;

};

#endif /* EXERCICE2_TRIANGLE_H_ */
