#include "ProdusAlimentar.h"

ProdusAlimentar::ProdusAlimentar(const std::string& nume, double pret, int calorii)
    : Produs(nume, pret), calorii(calorii) {}

double ProdusAlimentar::calculeazaPretFinal() const {
    return pret * 1.09;
}

void ProdusAlimentar::afisare(std::ostream& os) const {
    os << "Alimentar | " << nume
       << " | Pret final: " << calculeazaPretFinal()
       << " | Calorii: " << calorii;
}
