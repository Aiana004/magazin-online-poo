#ifndef COSCUMPARATURI_H
#define COSCUMPARATURI_H

#include <vector>
#include <iostream>
#include "Produs.h"

class CosCumparaturi {
private:
    std::vector<Produs*> produse;

    void copiaza(const CosCumparaturi& other);
    void elibereaza();

public:
    CosCumparaturi();                             // constructor default
    CosCumparaturi(const CosCumparaturi& other);  // constructor de copiere
    CosCumparaturi& operator=(const CosCumparaturi& other); // operator=
    ~CosCumparaturi();                            // destructor

    void adaugaProdus(Produs* p);
    double calculeazaTotal() const;

    friend std::ostream& operator<<(std::ostream& os, const CosCumparaturi& cos);
};

#endif
