#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include "Statisticien.hpp"

bool Statisticien::aCalcule()
{
    return calcul;
}

void Statisticien::acquerir(std::string chaine)
{
    int s=0, nb=0, v;
    std::ifstream fichier(chaine.c_str());

    while(!fichier.eof())
    {
        fichier >> s;
        s += v;
        nb++;
    }
    fichier.close();

    std::cout << "somme et moyenne : " << s << ", " << s/nb << std::endl;
    calcul = true;
}