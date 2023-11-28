#ifndef HISTOGRAMME_HPP
#define HISTOGRAMME_HPP

#include<vector>

#include "classe.hpp"
#include "echantillon.hpp"

class Histo {
    std::vector<Classe> classes;
    
    public:

    // Constructors
    Histo(double inf, double s, int nb) {
        double amplitude = (s-inf)/nb;
        for(auto i = 0; i<nb; i++) {
            classes.emplace_back(Classe(inf+amplitude*i, inf+amplitude*(i+1)));
        }
    }



    // Getters/Setters
    std::vector<Classe> getClasses() const {
        return classes;
    }




    // Other
    void ajouter(Echantillon e) {
        const std::vector<Valeur> vals = e.getValeurs();

        for(const Valeur& elem : vals) {
            auto const is_inside = [&elem](const Classe& c) {return (elem.getNombre() >= c.getBorneInf()) && (elem.getNombre() < c.getBorneSup());};
            std::vector<Classe>::iterator it = std::find_if(classes.begin(), classes.end(), is_inside);
            (*it).ajouter();
        }
    }
};

#endif