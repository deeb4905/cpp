#include "point.hpp"

// Surcharges externes

std::ostream& operator<<(std::ostream& f, const Point& p)
{
    p.afficher(f);
    return f;
}