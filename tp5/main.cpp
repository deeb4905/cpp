#include <iostream>
#include <cstring>
#include <sstream>
#include "Chaine.hpp"
#include "Fonctions.hpp"
#include "null_pointer.hpp"


int main(int, char**)
{
    Chaine s(0);
    
  // verification que l'heritage est bien fait  
  std::logic_error * pe = new null_pointer;  
  delete pe;

  std::cout << (s[1] == 0) << std::endl;

    return 0;
}