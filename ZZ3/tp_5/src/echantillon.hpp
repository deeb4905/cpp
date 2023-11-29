#ifndef ECHANTILLON_HPP
#define ECHANTILLON_HPP

#include<iostream>
#include<vector>
#include<algorithm>
#include<stdexcept>

#include "valeur.hpp"

class Echantillon {
    std::vector<Valeur> v;

    public:

    int getTaille() {
        return v.size();
    }

    const std::vector<Valeur>& getValeurs() const {
        return v;
    }

    Valeur getValeur(int i) {
        if(i >= getTaille()) {
            throw std::out_of_range("out of range");
        }
        return v[i];
    }


    void ajouter(double d) {
        Valeur val(d);
        v.emplace_back(val);
    }

    Valeur getMinimum() {
        if(v.size() == 0) {
            throw std::domain_error("empty");
        }
        std::vector<Valeur>::iterator min = std::min_element(v.begin(), v.end());
        return (*min);
    }

    Valeur getMaximum() {
        if(v.size() == 0) {
            throw std::domain_error("empty");
        }
        std::vector<Valeur>::iterator max = std::max_element(v.begin(), v.end());
        return (*max);
    }
};

#endif