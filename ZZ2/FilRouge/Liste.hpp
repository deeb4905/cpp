#ifndef LISTE_HPP
#define LISTE_HPP
#include "Cercle.hpp"
#include "Rectangle.hpp"

class Liste
{
	public:

	static int compteur;
	const int capacite;
	
	Cercle* tabC;
	Rectangle* tabR;

	int tailleC;
	int tailleR;



	// Constructors/Destructors
	Liste();
	~Liste();


	// Other
	void ajouter(Cercle&);
	void ajouter(Rectangle&);
	std::string toString();
};

#endif