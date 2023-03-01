#include <iostream>
#include <cstring>
#include <sstream>
#include "Agregateur.hpp"

template <typename T>
Agregateur<T>::Agregateur()
    :capacite(10), taille(0), tab(new T[capacite]){}

template <typename T>
Agregateur<T>::Agregateur(const Agregateur<T>& a)
    :capacite(a.capacity()), taille(a.size()), tab(new T[a.capacity()])
{
    memcpy(tab, a.getTab(), a.size()*sizeof(T));
}

template <typename T>
Agregateur<T>::~Agregateur()
{
    delete[] tab;
}




template <typename T>
int Agregateur<T>::capacity() const
{
    return capacite;
}

template <typename T>
int Agregateur<T>::size() const
{
    return taille;
}

template <typename T>
T const * Agregateur<T>::getTab() const
{
    return tab;
}



template <typename T>
Agregateur<T>& Agregateur<T>::operator=(const Agregateur<T>& a)
{
    if(&a != this)
    {
        delete[] tab;
        capacite = a.capacity();
        taille = a.size();

        memcpy(tab, a.getTab(), taille*sizeof(T));
    }

    return *this;
}

template <typename T>
void Agregateur<T>::push_back(T f)
{
    if(taille == capacite)
    {
        capacite *= 2;
        T* temp = new T[capacite];
        memcpy(temp, tab, taille*sizeof(T));

        delete[] tab;
        tab = temp;
    }

    tab[taille] = f;
    taille++;
}

template <typename T>
T Agregateur<T>::at(int i) const
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

template <typename T>
Agregateur<T>& Agregateur<T>::concat(const Agregateur<T>& a)
{
    T const * taba = a.getTab();

    for(int i=0;i<a.size();i++)
    {
        push_back(taba[i]);
    }

    return *this;
}

template <typename T>
void Agregateur<T>::afficher() const
{
    for(int i=0;i<taille;i++)
    {
        std::cout << tab[i] << std::endl;
    }
}