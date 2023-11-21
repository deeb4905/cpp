#include "ressource.hpp"
#include "consommateur.hpp"

Ressource::Ressource(int s):stock(s){}

unsigned int Ressource::getStock() {
    return stock;
}

void Ressource::consommer(int q) {
    stock -= q;
}




Consommateur::Consommateur(unsigned int b, std::shared_ptr<Ressource> r):besoin(b), p(r){}

void Consommateur::puiser() {
    if(p!=nullptr) {
        if(p->getStock() <= besoin) {
            p->consommer(p->getStock());
            p.reset();
        }
        else {
            p->consommer(besoin);
        }
    }
}




std::ostream& operator<<(std::ostream& s, ressources_t& v) {
    for(auto& elem : v) {
        if(elem.expired()) {
            s << "- ";
        } else {
            s << elem.lock()->getStock() << " ";
        }
    }

    return s;
}