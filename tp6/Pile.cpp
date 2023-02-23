#include <iostream>
#include <cstring>
#include <sstream>
#include "Pile.hpp"

Pile::Pile(int t):capacite(t), taille(0), tab(nullptr)
{
    try
    {
        tab = new int[capacite];
    }
    catch(ExceptionInvalidArgument e)
    {
        std::cerr << "Invalid argument provided" << std::endl;
        delete[] tab;
    }
}

Pile::Pile():Pile(10){}

Pile::Pile(const Pile& p):capacite(p.getCapacite()), taille(p.size()), tab(new int[capacite])
{
    mempcpy(tab, p.getTab(), taille*sizeof(int));
}

Pile::~Pile()
{
    delete[] tab;
}



int Pile::getCapacite() const
{
    return capacite;
}

int Pile::size() const
{
    return taille;
}

const int* Pile::getTab() const
{
    return tab;
}



Pile& Pile::operator=(const Pile& p)
{
    if(&p != this)
    {
        delete[] tab;

        capacite = p.getCapacite();
        taille = p.size();
        tab = new int[capacite];
        memcpy(tab, p.getTab(), taille*sizeof(int));
    }

    return *this;
}



bool Pile::empty() const
{
    return !taille;
}

void Pile::push(int e)
{
    try
    {
        tab[taille] = e;
        taille++;
    }
    catch(ExceptionBornes e)
    {
        std::cerr << "Out of bonds" << std::endl;
        taille++;
    }
    
}

int Pile::pop()
{
    /*try
    {
        taille--;
        return tab[taille];
    }
    catch(ExceptionBornes e)
    {
        std::cerr << "Out of bonds" << std::endl;
        taille++;
    }*/

    if(taille<1)
    {
        throw(ExceptionBornes());
    }
    taille--;
    return tab[taille];
    
    return 0;
}

int Pile::top() const
{
    try
    {
        return tab[taille-1];
    }
    catch(ExceptionBornes e)
    {
        std::cerr << "Out of bonds" << std::endl;
    }

    return 0;
}