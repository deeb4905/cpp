#include <iostream>
#include <cstring>
#include <sstream>
#include "Fonctions.hpp"

int main(int, char**)
{
    int a = 1;
    int b = 2;
    double c = 3;

    std::cout << maximum(a, b);
    //std::cout << maximum(a, c);
    std::cout << maximum((double)a, c);

    return 0;
}