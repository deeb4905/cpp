#include "nuage.hpp"
#include "cartesien.hpp"
#include "point.hpp"

Nuage::Nuage():s(0){}

int Nuage::size() const
{
    return s;
}

void Nuage::ajouter(Point* p)
{
    list.emplace_back(p);
    s++;
}

double Nuage::barycentre() const
{
    double baryX = 0;
    double baryY = 0;
    Cartesien c;

    for(Point* p : list)
    {
        p->convertir(c);
        baryX += c.getX();
        baryY += c.getY();
    }

    return ;
}





void Nuage::afficher(std::ostream& flux) const
{
    for(Point* p : list)
    {
        p->afficher(flux);
    }
}