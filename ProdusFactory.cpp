#include "ProdusFactory.h"
#include "ProdusAlimentar.h"
#include "ProdusVestimentar.h"
#include "ProdusElectronic.h"
#include <stdexcept>

std::unique_ptr<Produs> ProdusFactory::creeazaProdus(
    const std::string& tip,
    const std::string& nume,
    double pret,
    const std::string& extra
) {
    if (tip == "alimentar") {
        return std::make_unique<ProdusAlimentar>(
            nume, pret, extra
        );
    }
    else if (tip == "vestimentar") {
        return std::make_unique<ProdusVestimentar>(
            nume, pret, extra
        );
    }
    else if (tip == "electronic") {
        return std::make_unique<ProdusElectronic>(
            nume, pret, std::stoi(extra)
        );
    }

    throw std::invalid_argument("Tip produs necunoscut");
}
