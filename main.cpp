#include <iostream>
#include "Magazin.h"

int main() {
    Magazin magazin;

    Produs p1("Laptop", 3500);
    Produs p2("Telefon", 2500);
    Produs p3("Casti", 300);

    magazin.adaugaProdus(p1);
    magazin.adaugaProdus(p2);
    magazin.adaugaProdus(p3);

    std::cout << "Produse disponibile in magazin:\n";
    magazin.afiseazaProduse();

    return 0;
}
