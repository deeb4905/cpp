#ifndef HUMANOIDE_HPP
#define HUMANOIDE_HPP

#include <iostream>

class Humanoide : public Humain, public Machine
{
protected:
    std::string date_c;
    std::string date_r;

public:
    // Humanoide();
    Humanoide(std::string, char, int, std::string, int, int, std::string, std::string);
};

#endif