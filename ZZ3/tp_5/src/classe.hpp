#ifndef CLASSE_HPP
#define CLASSE_HPP

#include<vector>

class Classe {
    double borneSup;
    double borneInf;
    int quantite;
    
    public:

    // Constructors
    Classe(double i, double s, int q = 0) {
        borneSup = s;
        borneInf = i;
        quantite = q;
    }
    

    // Getters/Setters
    double getBorneSup() const {
        return borneSup;
    }

    double getBorneInf() const {
        return borneInf;
    }

    int getQuantite() const {
        return quantite;
    }


    void setBorneSup(double s) {
        borneSup = s;
    }

    void setBorneInf(double i) {
        borneInf = i;
    }


    void setQuantite(int q) {
        quantite = q;
    }


    // Other
    void ajouter() {
        quantite++;
    }


    bool operator<(const Classe& c2) {
        return quantite < c2.getQuantite();
    }

};

#endif