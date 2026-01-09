#ifndef PRODUS_ALIMENTAR_H
#define PRODUS_ALIMENTAR_H

#include "Produs.h"

class ProdusAlimentar : public Produs {
private:
    int calorii;

public:
    ProdusAlimentar(const std::string& nume, double pret, int calorii);

    double calculeazaPretFinal() const override;
    void afisare(std::ostream& os) const override;
};

#endif
