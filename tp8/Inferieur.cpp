#include <iostream>
#include <cstring>
#include <sstream>
#include "Inferieur.hpp"
#include "ZZ.hpp"

bool Inferieur::operator()(const ZZ& a, const ZZ& b) const
{
    return a.getNote()<b.getNote();
}