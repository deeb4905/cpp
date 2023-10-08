#ifndef POINT_HPP
#define POINT_HPP

#include <sstream>

using namespace std;

class Point
{
    public:
    virtual void afficher(stringstream&) const = 0;
};

stringstream& operator<<(stringstream&, Point&) const;

#endif