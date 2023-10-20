#include "nuage.hpp"
#include "cartesien.hpp"
#include "point.hpp"
#include <cstdlib>


Nuage::Nuage():{}

int Nuage::size() const
{
    return list.size();
}

const std::vector<Point*> Nuage::getList() const
{
    return list;
}



void Nuage::ajouter(Point& p)
{
    list.emplace_back(&p);
}

Nuage::const_iterator Nuage::begin()
{
    Nuage::const_iterator it = list.begin();
    return it;
}

Nuage::const_iterator Nuage::end()
{
    Nuage::const_iterator it = list.end();
    return it;
}










Cartesien barycentre(Nuage& n)
{
    Cartesien c;
    double baryX = 0;
    double baryY = 0;
    
    for(Point* p : n.getList())
    {
        p->convertir(c);
        baryX += c.getX();
        baryY += c.getY();
    }

    c.setX(baryX/n.size());
    c.setY(baryY/n.size());

    return c;
}




void Nuage::afficher(std::ostream& flux) const
{
    for(Point* p : list)
    {
        p->afficher(flux);
    }
}




Cartesien BarycentreCartesien::operator()(Nuage& n) const
{
    Cartesien c;
    double baryX = 0;
    double baryY = 0;
    
    for(Point* p : n.getList())
    {
        p->convertir(c);
        baryX += c.getX();
        baryY += c.getY();
    }

    c.setX(baryX/n.size());
    c.setY(baryY/n.size());

    return c;
}

Polaire BarycentrePolaire::operator()(Nuage& n) const
{
    Polaire po;
    barycentre(n).convertir(po);

    return po;
}