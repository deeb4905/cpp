#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP
#include "Forme.hpp"

class Rectangle : public Forme
{
	int ordre;


	public:

	// Constructors
	Rectangle(int, int, int, int);

	// Getters/Setters
	int getOrdre();

	// Other
	std::string toString() override;
};

#endif