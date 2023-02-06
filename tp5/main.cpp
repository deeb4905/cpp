#include <iostream>
#include <cstring>
#include <sstream>
#include "Chaine.hpp"
#include "Fonctions.hpp"

int main(int, char**)
{
    Chaine c1{"un"};
    Chaine c2{"deux"};
    c1 = c2;

    return 0;
}