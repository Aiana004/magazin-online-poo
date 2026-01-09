#ifndef MAGAZIN_H
#define MAGAZIN_H

#include <vector>
#include <memory>
#include "Produs.h"

class Magazin {
private:
    std::vector<std::unique_ptr<Produs>> produse;

    Magazin() = default; // constructor privat (Singleton)

public:
    Magazin(const Magazin&) = delete;
    Magazin& operator=(const Magazin&) = delete;

    static Magazin& getInstance();

    void adaugaProdus(std::unique_ptr<Produs> produs);
    void afiseazaProduse() const;
};

#endif
