#include "Client.h"

Client::Client(const std::string& nume, const std::string& email)
    : nume(nume), email(email) {}

const std::string& Client::getNume() const {
    return nume;
}

const std::string& Client::getEmail() const {
    return email;
}

bool Client::emailValid() const {
    return email.find('@') != std::string::npos;
}

std::ostream& operator<<(std::ostream& os, const Client& c) {
    os << "Client: " << c.nume << " | Email: " << c.email;
    return os;
}
