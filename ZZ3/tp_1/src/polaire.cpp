#include "polaire.hpp"

Polaire::Polaire(double a, double d):angle(a), distance(d){}
Polaire::Polaire():Polaire(0, 0){}

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





void Polaire::afficher(stringstream& flux) const
{
    flux << "(a=" << this->getAngle() << ";d=" << this->getDistance() << ")";
}