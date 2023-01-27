#include <iostream>
#include <string>
#include "Cercle.hpp"

Cercle::Cercle(int vx, int vy, int vw, int vh)
	:Forme(vx, vy, vw, vh){}

Cercle::Cercle(int cx, int cy, int r)
	:Cercle(cx-r, cy-r, 2*r, 2*r){}

Cercle::Cercle():Cercle(0, 0, 0, 0){}


int Cercle::getOrdre()
{
	return ordre;
}

void Cercle::setOrdre(int o)
{
	ordre = o;
}


std::string Cercle::toString()
{
	std::string s = "Cercle ";
	return s;
}