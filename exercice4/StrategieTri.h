

#ifndef EXERCICE4_STRATEGIETRI_H_
#define EXERCICE4_STRATEGIETRI_H_
#include <vector>
#include <string>

class StrategieTri {
public:
    virtual ~StrategieTri() {}

    virtual void trier(std::vector<std::string>& donnees) const = 0;
};




#endif /* EXERCICE4_STRATEGIETRI_H_ */
