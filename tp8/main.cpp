#include <algorithm>
#include <vector>
#include <iostream>
#include <iterator>
#include <queue>
#include "ZZ.hpp"
#include "Fonctions.hpp"

int main (int, char **)
{
    typedef std::vector<ZZ>  vzz;
    // OU en C++ 2011
    // using vzz = std::vector<ZZ> ;

    vzz zz;

    // il faut mettre des elements
    // zz.push_back(ZZ(...));
    ZZ z1{"Manuel", "Valls", 2};
    ZZ z2{"Na", "gui", 13};
    ZZ z3{"Eric", "et Ramzy", 10};

    zz.push_back(z1);
    zz.push_back(z2);
    zz.push_back(z3);

    std::priority_queue<ZZ> tri;

    for(vzz::iterator it = zz.begin(); 
        it!=zz.end(); ++it)
    tri.push(*it);

    while(!tri.empty()) {
    std::cout << tri.top() << " ";
    tri.pop();
    }
    return 0;
}
