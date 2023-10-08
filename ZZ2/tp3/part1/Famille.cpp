#include <iostream>
#include <sstream>
#include <string>
#include "Famille.hpp"

Famille::Famille(int t):nb_membres{t}, tab(nb_membres == 0 ? nullptr : new Bavarde[nb_membres])
{
    std::cout << "Construction de Famille" << std::endl;
}

Famille::~Famille()
{
    delete[] tab;
    std::cout << "Destruction de Famille" << std::endl;
}