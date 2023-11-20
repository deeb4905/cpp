#ifndef PAQUET_HPP
#define PAQUET_HPP

#include <vector>
#include <memory>
#include <iterator>
#include <iostream>

#include "usine.hpp"

using paquet_t = std::vector<std::unique_ptr<Carte>>;

void remplir(paquet_t&, UsineCarte&);

std::ostream& operator<<(std::ostream&, paquet_t&);

#endif