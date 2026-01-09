#ifndef PRODUS_H
#define PRODUS_H

#include <string>
#include <iostream>

class Produs {
protected:
    std::string nume;
    double pret;

public:
    Produs(const std::string& nume, double pret);
    virtual ~Produs();

    virtual double calculeazaPretFinal() const = 0;
    virtual void afisare(std::ostream& os) const;

    friend std::ostream& operator<<(std::ostream& os, const Produs& p);
};

#endif

