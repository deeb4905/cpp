#include <iostream>
#include <string>
#include "Forme.hpp"

int Forme::compteur = 0;

Forme::Forme(int vx, int vy, int vw, int vh)
	:p(Point(vx, vy)), w(vw), h(vh), ordre(compteur), couleur(COULEURS::BLEU)
	{
		compteur++;
	}

Forme::Forme(int vw, int vh)
	:p(ORIGINE), w(vw), h(vh), ordre(compteur), couleur(COULEURS::BLEU)
	{
		compteur++;
	}

Forme::Forme()
	:Forme(10, 10){}



int Forme::getOrdre() const
{
	return ordre;
}

void Forme::setOrdre(int o)
{
	ordre = o;
}


COULEURS Forme::getCouleur() const
{
	return couleur;
}

void Forme::setCouleur(COULEURS c)
{
	couleur = c;
}


Point& Forme::getPoint()
{
	return p;
}

std::string Forme::toString() const
{
	std::string s = "Forme " + std::to_string(p.getX()) + " " + std::to_string(p.getY()) + " " + std::to_string(w) + " " + std::to_string(h);
	return s;
}