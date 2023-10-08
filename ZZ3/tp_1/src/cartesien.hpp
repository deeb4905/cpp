#ifndef CARTESIEN_HPP
#define CARTESIEN_HPP

#include <sstream>
#include "point.hpp"

using namespace std;

class Cartesien : public Point
{
    double x;
    double y;
    
    public:
    Cartesien();
    Cartesien(double, double);

    // Getters/Setters
    double getX() const;
    double getY() const;
    void setX(double);
    void setY(double);

    void afficher(stringstream&) const;
};

#endif