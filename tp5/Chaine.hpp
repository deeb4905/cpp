#ifndef CHAINE_HPP
#define CHAINE_HPP

#include <sstream>
#include <iostream>
#include <cstring>

class Chaine
{
    int capacite;
    char* tab;


    public:

    class OutOfRangeException{};

    // Constructors/Destructors
    Chaine();
    Chaine(char const *);
    Chaine(int);
    Chaine(const Chaine&); // Constructeur de copie
    ~Chaine();

    // Getters/Setters
    int getCapacite() const;
    char const * c_str() const;

    // Other
    void afficher(std::ostream& = std::cout) const;
    Chaine& operator=(const Chaine&);
    char& operator[](int);
    char& operator[](int) const;
};

#endif