#include <iostream>
#include <memory>
#include "Magazin.h"
#include "ProdusAlimentar.h"
#include "ProdusVestimentar.h"
#include "ProdusElectronic.h"

int main() {
    Magazin magazin;

    magazin.adaugaProdus(
        std::make_unique<ProdusElectronic>("Laptop", 3500, 24));

    magazin.adaugaProdus(
        std::make_unique<ProdusVestimentar>("Tricou", 80, "M"));

    magazin.adaugaProdus(
        std::make_unique<ProdusAlimentar>("Paine", 5, "01.02.2026"));

    std::cout << "Produse disponibile in magazin:\n";
    magazin.afiseazaProduse();

    return 0;
}
