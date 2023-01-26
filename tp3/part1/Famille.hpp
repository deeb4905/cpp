#ifndef FAMILLE_HPP
#define FAMILLE_HPP

#include "Bavarde.hpp"

class Famille
{
    int nb_membres;
	Bavarde* tab;


	public:

	// Constructors
	Famille(int);

    //Destructors
    ~Famille();
};

#endif