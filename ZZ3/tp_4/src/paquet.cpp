#include "paquet.hpp"

void remplir(paquet_t& paquet, UsineCarte& usine) {
 
    std::unique_ptr<Carte> p;
    while((p = usine.getCarte()) != nullptr) {
        paquet.push_back(std::move(p));
    }
}
using namespace std;

std::ostream& operator<<(std::ostream& s, paquet_t& p) {
    //paquet_t::iterator it;
    /*for(auto it = p.begin(); it != p.end(); it++) {
        //s << (*it)->getValeur() << " ";
    }*/

    for(auto const& elem : p) {
        s << elem->getValeur() << " ";
    }
    return s;
}