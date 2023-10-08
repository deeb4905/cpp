#include <iostream>
#include <cstring>
#include <sstream>
#include "ZZ.hpp"

class Inferieur
{
    public:

    bool operator()(const ZZ&, const ZZ&) const;
};