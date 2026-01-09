#include <iostream>
#include "ProdusAlimentar.h"
#include "ProdusElectronic.h"
#include "ProdusVestimentar.h"
#include "Client.h"
#include "Comanda.h"
#include "Magazin.h"

int main() {
    // === Tema 1: Client + Comanda + CosCumparaturi ===
    Client client("Ana Popescu", "ana@email.com");

    ProdusAlimentar pa("Paine", 5, "01.02.2026");
    ProdusElectronic pe("Laptop", 3500, 24);
    ProdusVestimentar pv("Tricou", 80, "M");

    Comanda comanda(client);
    comanda.adaugaProdus(&pa);
    comanda.adaugaProdus(&pe);
    comanda.adaugaProdus(&pv);

    std::cout << "=== Comanda client ===\n";
    std::cout << comanda << "\n";

    // === Tema 2: Magazin + polimorfism ===
    Magazin magazin;
    magazin.adaugaProdus(std::make_unique<ProdusElectronic>("Telefon", 2500, 12));
    magazin.adaugaProdus(std::make_unique<ProdusVestimentar>("Geaca", 400, "L"));

    std::cout << "\n=== Produse in magazin ===\n";
    magazin.afiseazaProduse();

    return 0;
}
