#include <iostream>
#include <sstream>
#include "A.hpp"
#include "B.hpp"

void B::afficher()
{
    std::cout << j << std::endl;
}

void B::send(A* pa)
{
    pa->exec(10);
}

void B::exec(int v)
{
    j+=v;
}