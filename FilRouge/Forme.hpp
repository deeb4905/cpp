#ifndef FORME_HPP
#define FORME_HPP
#include "Point.hpp"

enum class COULEURS
{BLEU, VERT, ROUGE, JAUNE};

class Forme
{
	protected:
	
	static int compteur;
	
	Point p;
	int w;
	int h;
	int ordre;
	COULEURS couleur;


	public:

	Forme(int, int, int, int);
	Forme(int, int);
	Forme();

	// Setters/Getters
	Point& getPoint();
	int getOrdre() const;
	void setOrdre(int);
	COULEURS getCouleur() const;
	void setCouleur(COULEURS);
	virtual Forme* clone() const = 0;

	// Other
	virtual std::string toString() const;
};

#endif