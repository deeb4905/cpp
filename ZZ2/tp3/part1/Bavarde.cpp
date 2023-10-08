#include <iostream>
#include "Bavarde.hpp"

    
Bavarde::Bavarde(int vp):p(vp)
{
    std::cout << "Construction de Bavarde " << p << std::endl;
}

Bavarde::Bavarde()
    :Bavarde(0){}


Bavarde::~Bavarde()
{
    std::cout << "Destruction de Bavarde " << p << std::endl;
}

int Bavarde::getP()
{
    return p;
}

void Bavarde::afficher()
{
    std::cout << "Affichage de " << p << std::endl;
}


/*
void Bavarde::fonction(Bavarde b)
{
  std::cout << "code de la fonction" << std::endl;
}*/