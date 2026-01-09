#include "ProdusElectronic.h"

ProdusElectronic::ProdusElectronic(const std::string& nume, double pret, int garantieLuni)
    : Produs(nume, pret), garantieLuni(garantieLuni) {}

double ProdusElectronic::calculeazaPretFinal() const {
    return pret * 1.19;
}

void ProdusElectronic::afisare(std::ostream& os) const {
    os << "Electronic | " << nume
       << " | Pret final: " << calculeazaPretFinal()
       << " | Garantie: " << garantieLuni << " luni";
}
