#include "catch.hpp"
#include <fstream>
#include <iostream>
#include <cstring>
#include <sstream>
#include "Chaine.hpp" 
#include "Fonctions.hpp"
#include "null_pointer.hpp"

TEST_CASE("exception sur pointeur null") {
  Chaine s(0);
    
  // verification que l'heritage est bien fait  
  std::logic_error * pe = new null_pointer;  
  delete pe;

  REQUIRE_THROWS_AS( s[1] == 0, null_pointer);
}