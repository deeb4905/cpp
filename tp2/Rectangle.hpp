#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP

class Rectangle
{
	int x;
	int y;
	int w;
	int h;


	public:

	// Constructors
	Rectangle(int, int, int, int);

	// Other
	std::string toString();
};

#endif