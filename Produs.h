#pragma once
#include <string>
#include <iostream>

class Produs {
private:
    std::string nume;
    double pret;

public:
    Produs();
    Produs(const std::string& nume, double pret);

    std::string getNume() const;
    double getPret() const;

    void setPret(double pret);

    friend std::ostream& operator<<(std::ostream& os, const Produs& p);
};
