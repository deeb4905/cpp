#include <sstream>
#include <iostream>
#include <cstring>
#include "ZZ.hpp"

ZZ::ZZ(std::string n, std::string p, int m):nom(n), prenom(p), note(m){}

std::string ZZ::getName() const
{
    return nom + prenom;
}

int ZZ::getNote() const
{
    return note;
}