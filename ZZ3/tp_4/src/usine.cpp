#include <memory>

#include "usine.hpp"

UsineCarte::UsineCarte(int n):nbCartesMax(n), nbCartes(0) {}

std::unique_ptr<Carte> UsineCarte::getCarte() {
    std::unique_ptr<Carte> p;

    if(nbCartes < nbCartesMax) {
        p.reset(new Carte(nbCartes));
        nbCartes++; 
    }

    return p;
}