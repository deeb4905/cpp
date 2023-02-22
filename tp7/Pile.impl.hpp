#include <iostream>
#include <cstring>
#include <sstream>
#include "Pile.hpp"

template<typename T>
Pile::Pile(int t):capacite(t), taille(0), tab(nullptr)
{
    try
    {
        tab = new T[capacite];
    }
    catch(ExceptionInvalidArgument e)
    {
        std::cerr << "Invalid argument provided" << std::endl;
        delete[] tab;
    }
}

Pile::Pile():Pile(10){}

template<typename T>
Pile::Pile(const Pile& p):capacite(p.getCapacite()), taille(p.size()), tab(new T[capacite])
{
    mempcpy(tab, p.getTab(), taille*sizeof(T));
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
        tab = new T[capacite];
        memcpy(tab, p.getTab(), taille*sizeof(T));
    }

    return *this;
}



bool Pile::empty() const
{
    return !taille;
}

template <typename T>
void Pile::push(T e)
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

template <typename T>
const T& Pile::pop()
{
    try
    {
        taille--;
        return tab[taille];
    }
    catch(ExceptionBornes e)
    {
        std::cerr << "Out of bonds" << std::endl;
        taille++;
    }*
    
    return 0;
}

template <typename T>
const T& Pile::top() const
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