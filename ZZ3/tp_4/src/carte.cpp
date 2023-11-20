#include "carte.hpp"

unsigned int Carte::compteur=0;

Carte::Carte(int v):valeur(v) {
    compteur++;
}

Carte::~Carte() {
    compteur--;
}

unsigned int Carte::getValeur() {
    return valeur;
}

unsigned int Carte::getCompteur() {
    return compteur;
}