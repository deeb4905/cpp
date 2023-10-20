#include "cartesien.hpp"

Cartesien::Cartesien(double x, double y):x(x), y(y){}
Cartesien::Cartesien():Cartesien(0, 0){}
Cartesien::Cartesien(Polaire& p):Cartesien(p.getDistance() * cos(p.getAngle() * M_PI / 180),
                                            p.getDistance() * sin(p.getAngle() * M_PI / 180)){}

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



void Cartesien::convertir(Cartesien& c) const
{
    c.setX(x);
    c.setY(y);
}
void Cartesien::convertir(Polaire& p) const
{
    p.setAngle(atan2(y, x) * 180 / M_PI);
    p.setDistance(hypot(x, y));
}





void Cartesien::afficher(std::ostream& flux) const
{
    flux << "(x=" << this->getX() << ";y=" << this->getY() << ")";
}