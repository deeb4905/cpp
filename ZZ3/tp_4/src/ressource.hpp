#ifndef RESSOURCE_HPP
#define RESSOURCE_HPP

#include <iostream>
#include <vector>
#include <memory>

class Ressource
{
    unsigned int stock;


    public:

    // Constructors/Destructors
    Ressource(int);

    // Getters/Setters
    unsigned int getStock();

    // Other
    void consommer(int);

};

using ressources_t = std::vector<std::weak_ptr<Ressource>>;

std::ostream& operator<<(std::ostream&, ressources_t&);

#endif