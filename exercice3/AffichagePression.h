

#include "Observateur.h"

class AffichagePression : public Observateur {
public:
    void mettreAjour(double temperature, double humidite, double pression) override;
};
