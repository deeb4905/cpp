#include "catch.hpp"
#include <fstream>
#include <string>
#include "Statisticien.hpp" 

TEST_CASE("Statisticien_Initialisation") {
  Statisticien p;
  const std::string nomFichier("test01.txt");
  p.acquerir(nomFichier);
  REQUIRE(p.aCalcule());
}