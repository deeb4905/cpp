#ifndef FONCTIONS_HPP
#define FONCTIONS_HPP

#include "Chaine.hpp"

void afficherParValeur(Chaine);
void afficherParReference(Chaine&);
std::ostream& operator<<(std::ostream& o, const Chaine &c);

#endif