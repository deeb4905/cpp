#include <iostream>
#include <string>
#include "Rectangle.hpp"

Rectangle::Rectangle(int vx, int vy, int vw, int vh)
	:Forme(vx, vy, vw, vh){}


int Rectangle::getOrdre()
{
	return ordre;
}


std::string Rectangle::toString()
{
	std::string s = "Rectangle situé en (, ), de largeur  et de hauteur ";
	return s;
}