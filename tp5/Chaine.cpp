#include <iostream>
#include <cstring>
#include <sstream>
#include "Chaine.hpp"

Chaine::Chaine() : capacite(-1), tab(nullptr){}

Chaine::Chaine(char const * inCS) : capacite(strlen(inCS)), tab(new char[capacite+1])
{
    strcpy(tab, inCS);
    tab[capacite] = '\0';
}

Chaine::Chaine(int capa) : capacite(capa), tab(new char[capacite+1])
{
    tab[0] = '\0';
}

// Constructeur de copie
Chaine::Chaine(const Chaine& c) : capacite(c.getCapacite()), tab(new char[capacite+1])
{
    std::cout << "Constructeur de copie" << std::endl;

    strcpy(tab, c.c_str());
    tab[strlen(c.c_str())] = '\0';
}



Chaine::~Chaine()
{
    delete[] tab;
}



int Chaine::getCapacite() const
{
    return capacite;
}

char const * Chaine::c_str() const
{
    return tab;
}



void Chaine::afficher(std::ostream& flux) const
{
    flux << this->c_str();
}