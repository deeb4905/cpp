#include "point.hpp"

// Surcharges externes

stringstream& operator<<(stringstream& f, Point& p) const
{
    p.afficher(f);
}