/*
 * StationMeteo.h
 *
 *  Created on: 12 nov. 2026
 *      Author: Admin
 */

#ifndef EXERCICE3_STATIONMETEO_H_
#define EXERCICE3_STATIONMETEO_H_
#include<vector>
#include"Observateur.h"
#include<iostream>

class StationMeteo {
private:
	double temperature;
	double humidite;
	double pression;

	std::vector<Observateur*> observateurs;
	void notifierObservateurs() const ;

public:
	StationMeteo();
	void ajouterObservateur(Observateur* obs);
	void retirerObservateur(Observateur* obs);
	void setMesures(double temp, double hum,double pres);
};

#endif /* EXERCICE3_STATIONMETEO_H_ */
