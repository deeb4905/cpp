#include <iostream>
#include <cstring>
#include <sstream>
#include <ctime>
#include "Rand_0_100.hpp"

int Rand_0_100::operator()() const
{
    return std::rand()%100 + 1;
}