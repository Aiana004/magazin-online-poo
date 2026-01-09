#include "Magazin.h"
#include <iostream>

void Magazin::adaugaProdus(const Produs& p) {
    produse.push_back(p);
}

void Magazin::afiseazaProduse() const {
    for (const auto& p : produse) {
        std::cout << p << std::endl;
    }
}
