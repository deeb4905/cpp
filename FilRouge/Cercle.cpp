#include <iostream>
#include <string>
#include "Cercle.hpp"

Cercle::Cercle(int vx, int vy, int vw, int vh)
	:Forme(vx, vy, vw, vh){}

Cercle::Cercle(int cx, int cy, int r)
	:Cercle(cx-r, cy-r, 2*r, 2*r){}

Cercle::Cercle():Cercle(0, 0, 0, 0){}

Cercle::Cercle(int vw, int vh)
	:Forme(vw, vh){}


std::string Cercle::toString() const
{
	std::string s = "Cercle ";
	return s;
}

Cercle* Cercle::clone() const
{
	Cercle* newCercle = new Cercle{p.getX(), p.getY(), w, h};

	return newCercle;
}