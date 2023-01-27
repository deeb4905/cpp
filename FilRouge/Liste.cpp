#include <iostream>
#include "Liste.hpp"

int Liste::compteur = 0;


Liste::Liste():capacite(20), tabC(new Cercle[capacite]), tabR(new Rectangle[capacite]){}

Liste::~Liste()
{
    free(tabR);
    free(tabC);
}



void Liste::ajouter(Rectangle& r)
{
    r.setOrdre(compteur);
    tabR[tailleR] = r;

    tailleR++;
    compteur++;
}

void Liste::ajouter(Cercle& c)
{
    c.setOrdre(compteur);
    tabC[tailleC] = c;

    tailleC++;
    compteur++;
}




std::string Liste::toString()
{
    std::string s;
    int i=0; int j=0;

    while(i<tailleR || j<tailleC)
    {
        if(i<tailleC && (j == tailleR || tabC[i].getOrdre() < tabR[j].getOrdre()))
        {
            s += tabC[i].toString();
            i++;
        }
        else
        {
            s += tabR[j].toString();
            j++;
        }
    }

    return s;
}