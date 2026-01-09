#include "CosCumparaturi.h"

CosCumparaturi::CosCumparaturi() = default;

void CosCumparaturi::copiaza(const CosCumparaturi& other) {
    for (auto p : other.produse) {
        produse.push_back(p); 
    }
}

void CosCumparaturi::elibereaza() {
    produse.clear();
}

CosCumparaturi::CosCumparaturi(const CosCumparaturi& other) {
    copiaza(other);
}

CosCumparaturi& CosCumparaturi::operator=(const CosCumparaturi& other) {
    if (this != &other) {
        elibereaza();
        copiaza(other);
    }
    return *this;
}

CosCumparaturi::~CosCumparaturi() {
    elibereaza();
}

void CosCumparaturi::adaugaProdus(Produs* p) {
    produse.push_back(p);
}

double CosCumparaturi::calculeazaTotal() const {
    double total = 0;
    for (auto p : produse) {
        total += p->calculeazaPretFinal();
    }
    return total;
}

std::ostream& operator<<(std::ostream& os, const CosCumparaturi& cos) {
    os << "Cos cumparaturi:\n";
    for (auto p : cos.produse) {
        os << " - " << *p << "\n";
    }
    os << "Total: " << cos.calculeazaTotal();
    return os;
}
