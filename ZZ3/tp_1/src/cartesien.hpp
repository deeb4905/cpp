#ifndef CARTESIEN_HPP
#define CARTESIEN_HPP

#include <sstream>
#include <math.h>

#include "point.hpp"
#include "polaire.hpp"

class Polaire;

class Cartesien : public Point
{
    double x;
    double y;
    
    public:
    Cartesien();
    Cartesien(double, double);
    Cartesien(Polaire&);

    // Getters/Setters
    double getX() const;
    double getY() const;
    void setX(double);
    void setY(double);

    // Other
    void convertir(Polaire&) const;
    void convertir(Cartesien&) const;

    void afficher(std::stringstream&) const;
};

#endif