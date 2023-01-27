#ifndef CERCLE_HPP
#define CERCLE_HPP
#include "Forme.hpp"

class Cercle : public Forme
{
	int ordre;


	public:

	// Constructors
	Cercle(int, int, int, int);
	Cercle(int, int, int);
	Cercle();

	// Getters/Setters
	int getOrdre();
	void setOrdre(int);

	// Other
	std::string toString() override;
};

#endif