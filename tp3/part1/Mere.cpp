#include <iostream>
#include <sstream>
#include <string>
#include "Mere.hpp"

int Mere::cpt = 0;

Mere::Mere(std::string vnom)
	:nom(vnom)
{
	std::cout << "Construction de Mere" << std::endl;
}

Mere::Mere()
{
	cpt++;
	std::cout << "Construction de Mere" << std::endl;
}

Mere::~Mere()
{
	std::cout << "Destruction de Mere" << std::endl;
}


int Mere::getCpt()
{
	return cpt;
}

std::string Mere::getNom()
{
	return nom;
}


void Mere::afficher()
{
	std::cout << "Objet de classe Mere" << std::endl;
}