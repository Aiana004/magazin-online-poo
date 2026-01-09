#include "ProdusVestimentar.h"

ProdusVestimentar::ProdusVestimentar(const std::string& nume, double pret, const std::string& marime)
    : Produs(nume, pret), marime(marime) {}

double ProdusVestimentar::calculeazaPretFinal() const {
    return pret * 1.19; 
}

void ProdusVestimentar::afisare(std::ostream& os) const {
    os << "Vestimentar | " << nume
       << " | Pret final: " << calculeazaPretFinal()
       << " | Marime: " << marime;
}
