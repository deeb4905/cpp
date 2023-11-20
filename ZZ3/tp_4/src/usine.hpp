#ifndef USINE_HPP
#define USINE_HPP

#include <memory>

#include "carte.hpp"

class UsineCarte
{
    int nbCartesMax;
    int nbCartes;

    public:
    // Constructors
    UsineCarte(int = 52);
    UsineCarte(const UsineCarte&) = delete;
    UsineCarte& operator=(const UsineCarte&) = delete;

    // Other
    std::unique_ptr<Carte> getCarte();
};

#endif