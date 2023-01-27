#ifndef FORME_HPP
#define FORME_HPP
#include "Point.hpp"

class Forme
{
	protected:
	
	Point p;
	int w;
	int h;


	public:

	Forme(int, int, int, int);

	// Other
	virtual std::string toString() = 0;
};

#endif