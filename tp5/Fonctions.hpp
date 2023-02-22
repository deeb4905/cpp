#ifndef FONCTIONS_HPP
#define FONCTIONS_HPP

#include "Chaine.hpp"

void afficherParValeur(Chaine);
void afficherParReference(Chaine&);
std::stringstream& operator<<(std::stringstream& o, Chaine& c);

#endif