#pragma once
#include <vector>
#include "Produs.h"

class Magazin {
private:
    std::vector<Produs> produse;

public:
    void adaugaProdus(const Produs& p);
    void afiseazaProduse() const;
};
