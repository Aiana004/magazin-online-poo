#include "Comanda.h"

Comanda::Comanda(const Client& client)
    : client(client) {}

void Comanda::adaugaProdus(Produs* p) {
    cos.adaugaProdus(p);
}

double Comanda::totalComanda() const {
    return cos.calculeazaTotal();
}

std::ostream& operator<<(std::ostream& os, const Comanda& c) {
    os << "Comanda pentru client:\n";
    os << c.client << "\n";
    os << c.cos << "\n";
    return os;
}
