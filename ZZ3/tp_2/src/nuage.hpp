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
    //Version test 4a
    /*Cartesien c(0, 0);
    double baryX = 0;
    double baryY = 0;
    if(n.size()!=0)
    {
        T bary;
        for(T p : n.getList())
        {
            p.convertir(c);
            baryX += c.getX();
            baryY += c.getY();
        }

        c.setX(baryX/n.size());
        c.setY(baryY/n.size());

        c.convertir(bary);
    }
    return c;*/

    //Version test 4b
    Polaire pol(0, 0);
    double baryA = 0;
    double baryD = 0;
    if(n.size()!=0)
    {
        T bary;
        for(T p : n.getList())
        {
            p.convertir(pol);
            baryA += pol.getAngle();
            baryD += pol.getDistance();
        }

        pol.setAngle(baryA/n.size());
        pol.setDistance(baryD/n.size());

        pol.convertir(bary);
    }
    
    return pol;
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