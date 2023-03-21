#ifndef HUMAIN_HPP
#define HUMAIN_HPP

#include <iostream>

class Humain
{
protected:
    std::string nom;
    char genre;
    int age;

public:
    Humain(std::string, char, int);

    inline int getAge() const { return age; };
    inline char getGenre() const { return genre; };
    inline std::string getNom() const { return nom; };

    
};

#endif