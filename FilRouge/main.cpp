#include <iostream>
#include "Rectangle.hpp"
#include "Cercle.hpp"
#include "Liste.hpp"

int main(int, char**)
{
    // Fil rouge
    Rectangle r{1, 2, 3, 4};
    Cercle c{5, 6, 7, 8};
    Rectangle r2{1, 2, 3, 4};
    Rectangle r3{1, 2, 3, 4};
    Cercle c2{5, 6, 7, 8};
    Rectangle r4{1, 2, 3, 4};
    Cercle c3{5, 6, 7, 8};
    Cercle c4{5, 6, 7, 8};

    Liste l{};
    l.ajouter(r);
    l.ajouter(c);
    l.ajouter(r2);
    l.ajouter(r3);
    l.ajouter(c2);
    l.ajouter(r4);
    l.ajouter(c3);
    l.ajouter(c4);



    std::cout << l.toString() << std::endl;

    return 0;
}