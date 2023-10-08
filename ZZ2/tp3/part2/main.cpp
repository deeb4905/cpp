#include <iostream>
#include <sstream>
#include <cstdlib>
#include "A.hpp"
#include "B.hpp"

int main(int, char **)
{
  A elema;
  B elemb;

  elema.afficher();
  elemb.afficher();

  elema.send(&elemb);

  elema.afficher();
  elemb.afficher();

  elemb.send(&elema);

  elema.afficher();
  elemb.afficher();
  
  return 0;
}
