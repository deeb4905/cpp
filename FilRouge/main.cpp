#include <iostream>
#include "Rectangle.hpp"
#include "Cercle.hpp"
#include "Liste.hpp"

int main(int, char**)
{
    // Fil rouge
    Rectangle r{1, 2};
    Cercle c{10, 11, 12, 13};

    Rectangle r2 = *(r.clone());
    Cercle c2 = *(c.clone());

    std::cout << r2.toString() << std::endl;
    std::cout << c2.toString() << std::endl;

    return 0;
}