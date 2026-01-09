#ifndef COMANDA_H
#define COMANDA_H

#include <iostream>
#include "Client.h"
#include "CosCumparaturi.h"

class Comanda {
private:
    Client client;
    CosCumparaturi cos;

public:
    Comanda(const Client& client);

    void adaugaProdus(Produs* p);
    double totalComanda() const;

    friend std::ostream& operator<<(std::ostream& os, const Comanda& c);
};

#endif
