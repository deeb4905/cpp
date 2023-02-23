#ifndef FONCTIONS_HPP
#define FONCTIONS_HPP

#include <sstream>
#include "Chaine.hpp"

void afficherParValeur(Chaine);
void afficherParReference(Chaine&);
std::ostream& operator<<(std::ostream& o, Chaine& c);
Chaine operator+(Chaine& c1, Chaine& c2);

#endif