#ifndef NUAGE_HPP
#define NUAGE_HPP

#include <cstdlib>
#include <vector>
#include <sstream>
#include <math.h>

class Point;

class Nuage
{
    std::vector<Point*> list;
    int s;
    
    public:
    Nuage();

    // Getters/Setters
    int size() const;

    // Other
    void ajouter(Point*);
    double barycentre() const;

    void afficher(std::ostream&) const;
};

#endif