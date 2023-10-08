#include <iostream>
#include <sstream>
#include <string>
#include "Couple.hpp"

Couple::Couple(int va, int vb):a(va), b(vb)
{
    std::cout << "Construction de Couple" << std::endl;
}

Couple::~Couple()
{
    std::cout << "Destruction de Couple" << std::endl;
}