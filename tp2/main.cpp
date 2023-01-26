#include <iostream>
#include "Rectangle.hpp"
#include "Cercle.hpp"

int main(int, char**)
{
    // Fil rouge
    Rectangle r{1, 2, 3, 4};
    Cercle c{5, 6, 7, 8};
    Cercle c2{9, 10, 11};

    std::cout << r.toString() << std::endl;
    std::cout << c.toString() << std::endl;
    std::cout << c2.toString() << std::endl;

    return 0;
}