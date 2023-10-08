#ifndef CERCLE_HPP
#define CERCLE_HPP

class Cercle
{
	int x;
	int y;
	int w;
	int h;


	public:

	// Constructors
	Cercle(int, int, int, int);
	Cercle(int, int, int);

	// Other
	std::string toString();
};

#endif