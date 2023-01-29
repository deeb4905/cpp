#include <iostream>
#include "Rectangle.hpp"
#include "Cercle.hpp"
#include "Liste.hpp"

int main(int, char**)
{
    // Fil rouge
    Rectangle r{1, 2};

    std::cout << r.toString() << std::endl;

    return 0;
}