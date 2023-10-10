#include "point.hpp"

// Surcharges externes

std::stringstream& operator<<(std::stringstream& f, const Point& p)
{
    p.afficher(f);
    return f;
}