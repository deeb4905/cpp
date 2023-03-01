#include <iostream>
#include <cstring>
#include <sstream>
#include "Pile.hpp"

template<typename T>
Pile<T>::Pile(int t):capacite(t), taille(0), tab(nullptr)
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

template<typename T>
Pile<T>::Pile():Pile(10){}

template<typename T>
Pile<T>::Pile(const Pile<T>& p):capacite(p.getCapacite()), taille(p.size()), tab(new T[capacite])
{
    mempcpy(tab, p.getTab(), taille*sizeof(T));
}

template<typename T>
Pile<T>::~Pile()
{
    delete[] tab;
}



template<typename T>
int Pile<T>::getCapacite() const
{
    return capacite;
}

template<typename T>
int Pile<T>::size() const
{
    return taille;
}

template<typename T>
const T* Pile<T>::getTab() const
{
    return tab;
}



template<typename T>
Pile<T>& Pile<T>::operator=(const Pile<T>& p)
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



template<typename T>
bool Pile<T>::empty() const
{
    return !taille;
}

template <typename T>
void Pile<T>::push(const T& e)
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
const T& Pile<T>::pop()
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
    }
    
    return 0;
}

template <typename T>
const T& Pile<T>::top() const
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