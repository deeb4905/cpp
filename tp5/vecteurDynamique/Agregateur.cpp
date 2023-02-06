#include <iostream>
#include <cstring>
#include <sstream>
#include "Agregateur.hpp"

Agregateur::Agregateur()
    :capacite(10), taille(0), tab(new float[capacite]){}

Agregateur::Agregateur(const Agregateur& a)
    :capacite(a.capacity()), taille(a.size()), tab(new float[a.capacity()])
{
    memcpy(tab, a.getTab(), a.size()*sizeof(float));
}

Agregateur::~Agregateur()
{
    delete[] tab;
}




int Agregateur::capacity() const
{
    return capacite;
}

int Agregateur::size() const
{
    return taille;
}

float const * Agregateur::getTab() const
{
    return tab;
}



Agregateur& Agregateur::operator=(const Agregateur& a)
{
    if(&a != this)
    {
        delete[] tab;
        capacite = a.capacity();
        taille = a.size();

        memcpy(tab, a.getTab(), taille*sizeof(float));
    }

    return *this;
}

void Agregateur::push_back(float f)
{
    if(taille == capacite)
    {
        capacite *= 2;
        float* temp = new float[capacite];
        memcpy(temp, tab, taille*sizeof(float));

        delete[] tab;
        tab = temp;
    }

    tab[taille] = f;
    taille++;
}

float Agregateur::at(int i) const
{
    if(taille>i)
    {
        return tab[i];
    }
    else
    {
        return -1; // A changer avec une exception
    }
}

Agregateur& Agregateur::concat(const Agregateur& a)
{
    float const * taba = a.getTab();

    for(int i=0;i<a.size();i++)
    {
        push_back(taba[i]);
    }

    return *this;
}

void Agregateur::afficher() const
{
    for(int i=0;i<taille;i++)
    {
        std::cout << tab[i] << std::endl;
    }
}