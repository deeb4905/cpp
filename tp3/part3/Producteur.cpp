#include <iostream>
#include <sstream>
#include <fstream>
#include "Producteur.hpp"

int Producteur::getTravail()
{
    return travail;
}

void Producteur::produire(int n, std::string chaine)
{
    travail+=1;

    std::ofstream fichier(chaine.c_str());

    if(!fichier.fail())
    {
        fichier << n << std::endl;
        for(int i=0; i<n;i++)
        {
            fichier << i+1 << std::endl;
        }
    }
    fichier.close();
}