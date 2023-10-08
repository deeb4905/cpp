#ifndef FONCTIONS_HPP
#define FONCTIONS_HPP

#include <sstream>
#include "ZZ.hpp"

std::ostream& operator<<(std::ostream&, const ZZ&);
bool operator<(const ZZ&, const ZZ&);

#endif