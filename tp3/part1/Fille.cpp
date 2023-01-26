#include <iostream>
#include <sstream>
#include <string>
#include "Fille.hpp"

Fille::Fille():Mere()
{
	std::cout << "Construction de Fille" << std::endl;
}

Fille::Fille(std::string vnom):Mere(vnom)
{
	std::cout << "Construction de Fille" << std::endl;
}

Fille::~Fille()
{
	std::cout << "Destruction de Fille" << std::endl;
}


void Fille::afficher()
{
	std::cout << "Objet de classe Fille" << std::endl;
}