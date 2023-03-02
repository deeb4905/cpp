#include <iostream>
#include <string>
#include "Rectangle.hpp"

Rectangle::Rectangle(int vx, int vy, int vw, int vh)
	:Forme(vx, vy, vw, vh){}

Rectangle::Rectangle()
	:Rectangle(0, 0, 0, 0){}

Rectangle::Rectangle(int vw, int vh)
	:Forme(vw, vh){}


std::string Rectangle::toString() const
{
	std::string s = "Rectangle " + std::to_string(p.getX()) + " " + std::to_string(p.getY()) + " " + std::to_string(w) + " " + std::to_string(h);
	return s;
}

Rectangle* Rectangle::clone() const
{
	Rectangle* newRec = new Rectangle{p.getX(), p.getY(), w, h};

	return newRec;
}