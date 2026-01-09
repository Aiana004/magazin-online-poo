#include "Produs.h"

Produs::Produs() : nume(""), pret(0) {}

Produs::Produs(const std::string& nume, double pret)
    : nume(nume), pret(pret) {}

std::string Produs::getNume() const {
    return nume;
}

double Produs::getPret() const {
    return pret;
}

void Produs::setPret(double pret) {
    this->pret = pret;
}

std::ostream& operator<<(std::ostream& os, const Produs& p) {
    os << "Produs: " << p.nume << " | Pret: " << p.pret;
    return os;
}
