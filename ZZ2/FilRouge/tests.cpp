#include "catch.hpp"
#include <fstream>
#include <string>
#include "Forme.hpp" 

TEST_CASE("Instanciation1", "[Forme]") {
  Forme f1;
  REQUIRE(f1.getPoint().getX() == 0);
  REQUIRE(f1.getPoint().getY() == 0);
  REQUIRE(f1.getCouleur() ==  COULEURS::BLEU);
}

TEST_CASE("Instanciation2", "[Forme]") {
  Forme f2;
  
  f2.getPoint().setX(15);
  f2.getPoint().setY(25);
  f2.setCouleur(COULEURS::VERT);
  REQUIRE (f2.getPoint().getX() == 15);
  REQUIRE (f2.getPoint().getY() == 25);
  REQUIRE (f2.getCouleur() == COULEURS::VERT);
  REQUIRE_FALSE (f2.getCouleur() == COULEURS::BLEU);
  REQUIRE_FALSE (f2.getCouleur() == COULEURS::ROUGE);
  REQUIRE_FALSE (f2.getCouleur() == COULEURS::JAUNE);
}