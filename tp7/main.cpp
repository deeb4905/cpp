#include <iostream>
#include <cstring>
#include <sstream>
#include "Fonctions.hpp"
#include "Agregateur.hpp"
#include "Agregateur.impl.hpp"

int main(int, char**)
{
    
    Agregateur<char> a;
    Agregateur<char> b;
    std::cout << b.size() << std::endl;

    for(int i=0;i<10;i++)
    {
        a.push_back('a');
        b.push_back('b');
    }

    std::cout << b.size() << std::endl;
    Agregateur<char> c{a};

    a.afficher();
    (b.concat(c)).afficher();
    std::cout << c.at(4) << std::endl;

    return 0;
}