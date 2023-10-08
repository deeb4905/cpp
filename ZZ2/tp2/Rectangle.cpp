#include <iostream>
#include <sstream>
#include <string>
#include "Rectangle.hpp"

Rectangle::Rectangle(int vx, int vy, int vw, int vh)
	:x(vx), y(vy), w(vw), h(vh){}


std::string Rectangle::toString()
{
	std::ostringstream s;
	s << "Rectangle en (" << x << ", " << y << "), de largeur " << w << " et de hauteur " << h;
	return s.str();
}