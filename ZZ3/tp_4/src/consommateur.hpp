#ifndef CONSOMMATEUR_HPP
#define CONSOMMATEUR_HPP

#include "ressource.hpp"

class Consommateur
{
    unsigned int besoin;
    std::shared_ptr<Ressource> p;

    
    public:

    // Constructors/Destructors
    Consommateur(unsigned int, std::shared_ptr<Ressource>);

    // Getters/Setters
    

    // Other
    void puiser();
};

#endif