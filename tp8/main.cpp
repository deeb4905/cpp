#include <algorithm>
#include <vector>
#include <iostream>
#include <iterator>
#include <queue>
#include <map>
#include <utility>
#include <fstream>
#include "ZZ.hpp"
#include "Fonctions.hpp"

int self2(int const& i){return i;}

int main(int, char**)
{
    typedef std::vector<ZZ> vzz;
    // OU en C++ 2011
    // using vzz = std::vector<ZZ> ;

    vzz zz;
    zz.push_back(ZZ("Peppa", "Pig", 12));
    zz.push_back(ZZ("L'âne", "Trotro", 10.5));
    zz.push_back(ZZ("Franklin", "La tortue", 16));
    zz.push_back(ZZ("Mowgli", "Le petit humain", 4));

    std::priority_queue<ZZ> triNom;

    for(vzz::iterator it = zz.begin(); it!=zz.end(); ++it)
    triNom.push(*it);

    while(!triNom.empty())
    {
        std::cout << triNom.top() << " ";
        triNom.pop();
    }



    
    return 0;
}