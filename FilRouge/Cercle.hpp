#ifndef CERCLE_HPP
#define CERCLE_HPP

class Cercle : public Forme
{
	int ordre;


	public:

	// Constructors
	Cercle(int, int, int, int);
	Cercle(int, int, int);

	// Getters/Setters
	int getOrdre();

	// Other
	std::string toString() override;
};

#endif