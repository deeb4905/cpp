#include <iostream>
#include <cstring>
#include <sstream>
#include "Chaine.hpp"
#include "null_pointer.hpp"

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
    flux << this->c_str() << std::endl;
}

Chaine& Chaine::operator=(const Chaine& c)
{
    if(&c != this)
    {
        capacite = c.getCapacite();
        delete[] tab;
        tab = new char[capacite+1];

        strcpy(tab, c.c_str());
        tab[strlen(c.c_str())] = '\0';
    }

    return *this;
}

char& Chaine::operator[](int n)
{
    if(n<strlen(tab))
    {
        std::cout << "pas const" << std::endl;
        return tab[n];
    }
    else
    {
        throw(new null_pointer);
    }
}

char& Chaine::operator[](int n) const
{
    if(n<strlen(tab))
    {
        std::cout << "const" << std::endl;
        return tab[n];
    }
        else
    {
        throw(new null_pointer);
    }
}