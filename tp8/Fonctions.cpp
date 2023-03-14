#include <iostream>
#include <cstring>
#include <sstream>
#include "Fonctions.hpp"
#include "ZZ.hpp"

std::ostream& operator<<(std::ostream& o, const ZZ& z)
{
    o << z.getName() << " " << z.getNote() << std::endl;
    return o;
}

bool operator<(const ZZ& y, const ZZ& z)
{
    return y.getName() < z.getName();
}