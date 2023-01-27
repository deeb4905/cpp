#include <iostream>
#include <string>
#include "Rectangle.hpp"

Rectangle::Rectangle(int vx, int vy, int vw, int vh)
	:Forme(vx, vy, vw, vh){}

Rectangle::Rectangle():Rectangle(0, 0, 0, 0){}


int Rectangle::getOrdre()
{
	return ordre;
}

void Rectangle::setOrdre(int o)
{
	ordre = o;
}


std::string Rectangle::toString()
{
	std::string s = "Rectangle ";
	return s;
}