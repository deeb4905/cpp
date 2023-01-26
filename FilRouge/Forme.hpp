#ifndef FORME_HPP
#define FORME_HPP

class Point;

class Forme
{
	Point p;
	int w;
	int h;


	public:

	// Other
	virtual std::string toString();
};

#endif