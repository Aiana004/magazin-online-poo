#ifndef CLIENT_H
#define CLIENT_H

#include <string>
#include <iostream>

class Client {
private:
    std::string nume;
    std::string email;

public:
    // constructor cu parametri
    Client(const std::string& nume, const std::string& email);

    // getteri
    const std::string& getNume() const;
    const std::string& getEmail() const;

    // functie non-triviala
    bool emailValid() const;

    // afisare
    friend std::ostream& operator<<(std::ostream& os, const Client& c);
};

#endif
