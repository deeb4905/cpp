#include <iostream>
#include <sstream>
#include "A.hpp"
#include "B.hpp"

void A::afficher()
{
    std::cout << i << std::endl;
}

void A::send(B* pb)
{
    pb->exec(10);
}

void A::exec(int v)
{
    i+=v;
}