#ifndef PRODUS_VESTIMENTAR_H
#define PRODUS_VESTIMENTAR_H

#include "Produs.h"

class ProdusVestimentar : public Produs {
private:
    std::string marime;

public:
    ProdusVestimentar(const std::string& nume, double pret, const std::string& marime);

    double calculeazaPretFinal() const override;
    void afisare(std::ostream& os) const override;
};

#endif
