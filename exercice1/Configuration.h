/*
 * Configuration.h
 *
 *  Created on: 11 nov. 2026
 *      Author: Admin
 */

#ifndef EXERCICE1_CONFIGURATION_H_
#define EXERCICE1_CONFIGURATION_H_
#include<iostream>
#include<string>
class Configuration {
private:
	static Configuration* instance;
	std::string chemin;
	std::string login;
	std::string password;

	Configuration();
	~Configuration();
public:
	Configuration(const Configuration&) = delete;
	Configuration& operator=(const Configuration&) = delete;

	static Configuration* getInstance();


	static void detruireInstance();



	void afficher() const;

	const std::string& getChemin() const {
		return chemin;
	}

	void setChemin(const std::string &chemin) {
		this->chemin = chemin;
	}



	const std::string& getLogin() const {
		return login;
	}

	void setLogin(const std::string &login) {
		this->login = login;
	}

	const std::string& getPassword() const {
		return password;
	}

	void setPassword(const std::string &password) {
		this->password = password;
	}
};

#endif /* EXERCICE1_CONFIGURATION_H_ */
