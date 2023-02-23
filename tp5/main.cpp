#include <iostream>
#include <cstring>
#include <sstream>
#include "Chaine.hpp"
#include "Fonctions.hpp"


int main(int, char**)
{
    Chaine c1{"exemple"};
    Chaine c2{"lalalala"};

    (c1 + c2).afficher();
    c1.afficher();
    c2.afficher();

    return 0;
}