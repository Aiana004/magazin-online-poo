#ifndef PRODUS_ELECTRONIC_H
#define PRODUS_ELECTRONIC_H

#include "Produs.h"

class ProdusElectronic : public Produs {
private:
    int garantieLuni;

public:
    ProdusElectronic(const std::string& nume, double pret, int garantieLuni);

    double calculeazaPretFinal() const override;
    void afisare(std::ostream& os) const override;
};

#endif
