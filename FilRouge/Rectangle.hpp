#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP
#include "Forme.hpp"

class Rectangle : public Forme
{
	public:

	// Constructors
	Rectangle(int, int, int, int);
	Rectangle();
	Rectangle(int, int);

	// Other
	std::string toString() const override;
	Rectangle* clone() const override;
};

#endif