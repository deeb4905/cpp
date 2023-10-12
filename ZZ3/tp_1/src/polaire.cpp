#include "polaire.hpp"

Polaire::Polaire(double a, double d):angle(a), distance(d){}
Polaire::Polaire():Polaire(0, 0){}
Polaire::Polaire(Cartesien& c):Polaire(atan2(c.getY(), c.getX()) * 180 / M_PI,
                                hypot(c.getX(), c.getY())){}

double Polaire::getAngle() const
{
    return angle;
}

double Polaire::getDistance() const
{
    return distance;
}

void Polaire::setAngle(double v)
{
    angle = v;
}

void Polaire::setDistance(double v)
{
    distance = v;
}




void Polaire::convertir(Polaire& p) const
{
    p.setAngle(angle);
    p.setDistance(distance);
}
void Polaire::convertir(Cartesien& c) const
{
    c.setX(distance * cos(angle * M_PI / 180));
    c.setY(distance * sin(angle * M_PI / 180));
}




void Polaire::afficher(std::ostream& flux) const
{
    flux << "(a=" << this->getAngle() << ";d=" << this->getDistance() << ")" << std::endl;
}