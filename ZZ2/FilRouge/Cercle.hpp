#ifndef CERCLE_HPP
#define CERCLE_HPP
#include "Forme.hpp"

class Cercle : public Forme
{
	public:

	// Constructors
	Cercle(int, int, int, int);
	Cercle(int, int, int);
	Cercle();
	Cercle(int, int);

	// Other
	std::string toString() const override;
	Cercle* clone() const override;
};

#endif