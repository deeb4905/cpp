#include <iostream>
#include <string>
#include "Cercle.hpp"

Cercle::Cercle(int vx, int vy, int vw, int vh)
	:Forme(vx, vy, vw, vh){}

Cercle::Cercle(int cx, int cy, int r)
	:Cercle(cx-r, cy-r, 2*r, 2*r){}


int Cercle::getOrdre()
{
	return ordre;
}


std::string Cercle::toString()
{
	std::string s = "Cercle inscrit dans le rectangle situé en (, ), de largeur  et de hauteur ";
	return s;
}