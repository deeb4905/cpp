#include <iostream>
#include <cstring>
#include <sstream>
#include "Fonctions.hpp"
#include "Chaine.hpp"


void afficherParValeur(Chaine c)
{
    c.afficher();
}

void afficherParReference(Chaine& c)
{
    c.afficher();
}

std::ostream& operator<<(std::ostream& o, Chaine& c)
{
    c.afficher(o);
    return o;
}

Chaine operator+(Chaine& c1, Chaine& c2)
{
    char* tab = new char[strlen(c1.c_str()) + strlen(c2.c_str())-1];

    strcpy(tab, c1.c_str());
    strcat(tab, c2.c_str());
    Chaine temp(tab);

    delete[] tab;
    return temp;
}