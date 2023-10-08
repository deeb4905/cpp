#ifndef MERE_HPP
#define MERE_HPP

#include <string>

class Mere
{
	protected:

	int static cpt;
	std::string nom;


	public:

	// Getters/Setters
	static int getCpt();
	std::string getNom();

	// Constructors
	Mere();
	Mere(std::string);

	// Destructors
	~Mere();

	// Other
	void afficher();
};

#endif