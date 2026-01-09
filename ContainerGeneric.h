#ifndef CONTAINER_GENERIC_H
#define CONTAINER_GENERIC_H

#include <vector>
#include <iostream>

template <typename T>
class ContainerGeneric {
private:
    std::vector<T> elemente;

public:
    void adauga(const T& elem) {
        elemente.push_back(elem);
    }

    size_t dimensiune() const {
        return elemente.size();
    }

    void afiseaza() const {
        for (const auto& e : elemente) {
            std::cout << e << std::endl;
        }
    }
};

#endif
