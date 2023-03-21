#ifndef MACHINE_HPP
#define MACHINE_HPP

#include <iostream>

class Machine
{
protected:
    std::string type;
    int autonomie;
    int reparabilite;

public:
    Machine(std::string, int, int);
};

#endif