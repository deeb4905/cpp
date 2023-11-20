#ifndef CARTE_HPP
#define CARTE_HPP

#include <sstream>

class UsineCarte;

class Carte
{
    friend UsineCarte;

    unsigned int valeur;
    static unsigned int compteur;

    // Constructors/Destructors
    Carte(int);
    Carte(const Carte&) = delete;
    Carte& operator=(const Carte&) = delete;

    public:
    ~Carte();
    // Getters/Setters
    unsigned int getValeur();
    static unsigned int getCompteur();

};

#endif