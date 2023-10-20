#ifndef NUAGE_HPP
#define NUAGE_HPP

#include <cstdlib>
#include <vector>
#include <sstream>
#include <math.h>

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

template<typename T>
T barycentre_v1(Nuage<T>& n)
{
    Cartesien c;
    T bary;
    double baryX = 0;
    double baryY = 0;
    
    for(T p : n.getList())
    {
        p.convertir(c);
        baryX += c.getX();
        baryY += c.getY();
    }

    c.setX(baryX/n.size());
    c.setY(baryY/n.size());

    c.convertir(bary);

    return c;
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