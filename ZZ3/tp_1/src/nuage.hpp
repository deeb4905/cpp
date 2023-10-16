#ifndef NUAGE_HPP
#define NUAGE_HPP

#include <cstdlib>
#include <vector>
#include <sstream>
#include <math.h>

Cartesien barycentre(Nuage);

class Point;

class Nuage
{
    std::vector<Point*> list;
    int s;
    

    public:

    using const_iterator = std::vector<Point*>::iterator;

    Nuage();

    // Getters/Setters
    int size() const;
    const std::vector<Point*> getList() const;

    // Other
    void ajouter(Point&);
    const_iterator begin();
    const_iterator end();
    //double barycentre() const;

    void afficher(std::ostream&) const;
};

#endif