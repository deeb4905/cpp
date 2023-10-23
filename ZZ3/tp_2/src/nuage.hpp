#ifndef NUAGE_HPP
#define NUAGE_HPP

#include <cstdlib>
#include <vector>
#include <sstream>
#include <math.h>
#include <iterator>

#include "cartesien.hpp"
#include "polaire.hpp"
#include "point.hpp"

class Point;

template<typename T>
class Nuage
{
    std::vector<T> list;
    

    public:

    using const_iterator = typename std::vector<T>::iterator;
    using value_type = typename std::vector<T>::value_type;

    Nuage(){}

    //-------------------------------------------- Getters/Setters

    int size() const
    {
        return list.size();
    }

    const std::vector<T> getList() const
    {
        return list;
    }

    //-------------------------------------------- Other

    void ajouter(const T& p)
    {
        list.emplace_back(p);
    }

    const_iterator begin()
    {
        const_iterator it = list.begin();
        return it;
    }

    const_iterator end()
    {
        const_iterator it = list.end();
        return it;
    }


    void afficher(std::ostream& flux) const
{
    for(T p : list)
    {
        p.afficher(flux);
    }
}
};

template<template <typename> class Container, typename T>
T barycentre_v2(Container<T>& n)
{
    
    T bary;
    Cartesien c(0, 0);
    if(n.size()!=0)
    {
        double baryX = 0;
        double baryY = 0;
        for (auto it = n.begin() ; it != n.end(); ++it)
        {
            (*it).convertir(c);
            baryX += c.getX();
            baryY += c.getY();
        }
        c.setX(baryX/n.size());
        c.setY(baryY/n.size());
    }

    c.convertir(bary);
    return bary;
}



/*
Cartesien BarycentreCartesien::operator()(Nuage& n) const
{
    return //

    return c;
}


Polaire BarycentrePolaire::operator()(Nuage& n) const
{
    Polaire po;
    barycentre(n).convertir(po);

    return po;
}


*/
#endif