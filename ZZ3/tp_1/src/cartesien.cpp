#include "cartesien.hpp"

Cartesien::Cartesien(double x, double y):x(x), y(y){}
Cartesien::Cartesien():Cartesien(0, 0){}

double Cartesien::getX() const
{
    return x;
}

double Cartesien::getY() const
{
    return y;
}

void Cartesien::setX(double v)
{
    x = v;
}

void Cartesien::setY(double v)
{
    y = v;
}





void Cartesien::afficher(stringstream& flux) const
{
    flux << "(x=" << this->getX() << ";y=" << this->getY() << ")";
}