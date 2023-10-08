#include <iostream>
#include <cstring>
#include <sstream>
#include "Agregateur.hpp"

int main(int, char**)
{
    Agregateur vec{};
    std::cout << "capacité : " << vec.capacity() << std::endl;
    std::cout << "taille : " << vec.size() << std::endl;

    for(int i=0;i<25;i++)
    {
        vec.push_back(i*0.4);
    }

    std::cout << "capacité : " << vec.capacity() << std::endl;
    std::cout << "taille : " << vec.size() << std::endl;

    Agregateur vec2{vec};
    Agregateur vec3 = vec;
    vec.afficher();
    vec2.afficher();
    vec3.afficher();

    std::cout << vec.at(24) << std::endl;

    vec.concat(vec2);
    std::cout << "concaténation" << std::endl;
    vec.afficher();
    std::cout << "verif" << std::endl;
    vec2.afficher();

    return 0;
}