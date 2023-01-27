#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP
#include "Forme.hpp"

class Rectangle : public Forme
{
	int ordre;


	public:

	// Constructors
	Rectangle(int, int, int, int);
	Rectangle();

	// Getters/Setters
	int getOrdre();
	void setOrdre(int);

	// Other
	std::string toString() override;
};

#endif