#include "catch.hpp"
#include <fstream>
#include <iostream>
#include <cstring>
#include <sstream>
#include "Pile.hpp" 

// A faire quand on aura vu les exceptions
TEST_CASE("Exceptions de mauvaise construction") {

   REQUIRE_THROWS_AS( Pile(-1).empty(), std::invalid_argument );
   REQUIRE_THROWS_AS( Pile( 0).empty(), std::invalid_argument );
   
}

// A faire quand on aura vu les exceptions
TEST_CASE("Exception pile vide") {

   REQUIRE_THROWS_AS( Pile().pop(), std::invalid_argument );
   
}