
#include "TriParLongueur.h"
#include<algorithm>


void TriParLongueur::trier(std::vector<std::string >& donnees) const{
	std::stable_sort(donnees.begin(),donnees.end(),[](const std::string& a, const std::string& b){
				return a.size()<b.size();
	});
}


