#include <iostream>
#include <cstring>
#include <sstream>
#include "Fonctions.hpp"


void afficherParValeur(Chaine c)
{
    c.afficher();
}

void afficherParReference(Chaine& c)
{
    c.afficher();
}

std::stringstream& operator<<(std::stringstream& o, Chaine& c)
{
    c.afficher(o);
    return o;
}