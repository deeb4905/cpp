#include <iostream>
#include "Liste.hpp"

int Liste::compteur = 0;

Liste::Liste():capacite(20), tabC(new Cercle[capacite]), tabR(new Rectangle[capacite])
{}




int Liste::getCompteur()
{
    return compteur;
}




std::string Liste::toString()
{
    std::string s;
    int i=0; int j=0;

    while(i!=tailleC && j != tailleR)
    {
        if(i!=tailleC && tabC[i].getOrdre < tabR[j].getOrdre)
        {
            s << tabC[i].toString() << std::endl;
            i++;
        }
        else
        {
            s << tabR[j].toString() << std::endl;
            j++;
        }
    }

    return s;
}