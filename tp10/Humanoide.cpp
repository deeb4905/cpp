#include <iostream>
#include "Humain.hpp"
#include "Machine.hpp"
#include "Humanoide.hpp"

Humanoide::Humanoide(std::string n, char g, int a, std::string t, int aut, int rep, std::string datec, std::string dater)
    : Humain(n, g, a),
      Machine(t, aut, rep),
      date_c(datec), date_r(dater)
{
}
