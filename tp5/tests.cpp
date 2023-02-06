#include "catch.hpp"
#include <fstream>
#include <iostream>
#include <cstring>
#include <sstream>
#include "Chaine.hpp" 

TEST_CASE("Surcharge <<") {
  const char * chaine = "une nouvelle surcharge";
  Chaine s(chaine);
  std::stringstream ss;
  ss << s;  // :-)

  CHECK( ss.str() == chaine ); //  test de std::string, again :-))
}