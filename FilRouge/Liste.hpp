#ifndef LISTE_HPP
#define LISTE_HPP

class Cercle;
class Rectangle;
class Forme;

class Liste
{
	public:

	Cercle tabC[];
	Rectangle tabR[];

	const int capacite;
	int tailleC;
	int tailleR;

	static int compteur;


	// Constructors
	Liste();


	// Other
	void ajouter(Forme)
	std::string toString();
};

#endif