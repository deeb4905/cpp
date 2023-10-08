#include <iostream>
#include <sstream>
#include <string>
#include "Cercle.hpp"

Cercle::Cercle(int vx, int vy, int vw, int vh)
	:x(vx), y(vy), w(vw), h(vh){}

Cercle::Cercle(int cx, int cy, int r)
	:Cercle(cx-r, cy-r, 2*r, 2*r){}


std::string Cercle::toString()
{
	std::ostringstream s;
	s << "Rectangle en (" << x << ", " << y << "), de largeur " << w << " et de hauteur " << h;
	return s.str();
}