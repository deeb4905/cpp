#ifndef FILLE_HPP
#define FILLE_HPP

#include "Mere.hpp"

class Fille : public Mere
{
	public:

	// Constructors
	Fille();
	Fille(std::string);

	// Destructors
	~Fille();

	// Other
	void afficher();
};

#endif