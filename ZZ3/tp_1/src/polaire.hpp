#ifndef POLAIRE_HPP
#define POLAIRE_HPP

#include <sstream>
#include <math.h>

#include "point.hpp"
#include "cartesien.hpp"

class Cartesien;

class Polaire : public Point
{
    double angle;
    double distance;
    
    public:
    Polaire();
    Polaire(double, double);
    Polaire(Cartesien&);
    
    // Getters/Setters
    double getAngle() const;
    double getDistance() const;
    void setAngle(double);
    void setDistance(double);

    // Other
    void convertir(Cartesien&) const;
    void convertir(Polaire&) const;

    void afficher(std::stringstream&) const;
};

#endif