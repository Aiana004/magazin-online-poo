#include "Magazin.h"
#include <iostream>

Magazin& Magazin::getInstance() {
    static Magazin instance;
    return instance;
}

void Magazin::adaugaProdus(std::unique_ptr<Produs> produs) {
    produse.push_back(std::move(produs));
}

void Magazin::afiseazaProduse() const {
    for (const auto& produs : produse) {
        std::cout << *produs << std::endl;
    }
}
