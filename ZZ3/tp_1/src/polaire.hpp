#ifndef POLAIRE_HPP
#define POLAIRE_HPP

#include <sstream>
#include "point.hpp"

using namespace std;

class Polaire : public Point
{
    double angle;
    double distance;
    
    public:
    Polaire();
    Polaire(double, double);
    
    // Getters/Setters
    double getAngle() const;
    double getDistance() const;
    void setAngle(double);
    void setDistance(double);


    void afficher(stringstream&) const;
};

#endif