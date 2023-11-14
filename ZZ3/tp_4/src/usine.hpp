#ifndef CARTE_HPP
#define CARTE_HPP

#include <memory>

#include "carte.hpp"

class UsineCarte
{
    std::unique_ptr<Carte> getCarte();
};

#endif