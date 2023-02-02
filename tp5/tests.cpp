#include "catch.hpp"
#include <fstream>
#include <iostream>
#include <cstring>
#include <sstream>
#include "Chaine.hpp" 

TEST_CASE("methode afficher") {
    const char * original = "une chaine a tester";
    const Chaine c1(original);
    std::stringstream ss;
    
    c1.afficher(); // on verifie juste que ca compile
    c1.afficher(std::cout); // ca compile, mais pas d'interet pour les tests
    c1.afficher(ss); // utilisable pour les tests

    CHECK( ss.str() == original ); //  test de std::string :-)
}