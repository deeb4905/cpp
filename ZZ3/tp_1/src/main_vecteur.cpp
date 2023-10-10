#include <iostream>
#include <cstdlib>
#include <vector>

#include "point.hpp"
#include "cartesien.hpp"
#include "polaire.hpp"

int main() {
    
    Cartesien c1{1, 2};
    Cartesien c2{3, 4};

    Polaire p1{10, 20};
    Polaire p2{30, 40};

    std::vector<Cartesien> v1;
    std::vector<Polaire> v2;

    v1.emplace_back(c1);
    v1.emplace_back(c2);
    v2.emplace_back(p1);
    v2.emplace_back(p2);

    for(Cartesien elem : v1)
    {
        elem.afficher(std::cout);
    }
    for(Polaire elem : v2)
    {
        elem.afficher(std::cout);
    }

    return EXIT_SUCCESS;
}
