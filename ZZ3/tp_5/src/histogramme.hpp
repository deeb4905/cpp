#ifndef HISTOGRAMME_HPP
#define HISTOGRAMME_HPP

#include<set>
#include<functional>
#include<map>
#include<iterator>

#include "classe.hpp"
#include "echantillon.hpp"

class Histo {
    std::set<Classe> classes;
    
    public:

    // Constructors
    Histo(double inf, double s, int nb) {
        double amplitude = (s-inf)/nb;
        for(auto i = 0; i<nb; i++) {
            classes.insert(Classe(inf+amplitude*i, inf+amplitude*(i+1)));
        }
    }



    // Getters/Setters
    std::set<Classe> getClasses() const {
        return classes;
    }




    // Other
    void ajouter(Echantillon e) {
        const std::vector<Valeur> vals = e.getValeurs();

        for(const Valeur& elem : vals) {
            auto const is_inside = [&elem](const Classe& c) {return (elem.getNombre() >= c.getBorneInf()) && (elem.getNombre() < c.getBorneSup());};
            std::set<Classe>::iterator it = std::find_if(classes.begin(), classes.end(), is_inside);

            Classe newc = (*it);
            classes.erase(it);
            newc.ajouter();

            classes.insert(newc);
        }
    }
};


















template <typename Func = std::less<Classe>>
class Histogramme {
    std::set<Classe, Func> classes;
    std::multimap<const Classe, Valeur> valeurs;
    
    public:

    // Constructors
    Histogramme(double inf, double s, int nb) {
        double amplitude = (s-inf)/nb;
        for(auto i = 0; i<nb; i++) {
            classes.insert(Classe(inf+amplitude*i, inf+amplitude*(i+1)));
        }
    }

    template <typename Func2>
    Histogramme(const Histogramme<Func2>& h2) {
        for(auto cl : h2.getClasses()) {
            classes.insert(cl);
            valeurs = h2.getValeurs();
        }
    }




    // Getters/Setters
    std::set<Classe, Func> getClasses() const {
        return classes;
    }

    std::multimap<const Classe, Valeur> getValeurs() const {
        return valeurs;
    }

    using it_FoundValues = std::multimap<const Classe, Valeur>::const_iterator;
    std::pair<it_FoundValues, it_FoundValues> getValeurs(const Classe& cl) const {

        std::pair<it_FoundValues, it_FoundValues> foundVals = valeurs.equal_range(cl);
        return foundVals;
    }




    // Other
    void ajouter(Echantillon e) {
        const std::vector<Valeur> vals = e.getValeurs();

        for(const Valeur& elem : vals) {
            auto const is_inside = [&elem](const Classe& c) {return (elem.getNombre() >= c.getBorneInf()) && (elem.getNombre() < c.getBorneSup());};
            auto it = std::find_if(classes.begin(), classes.end(), is_inside);

            Classe newc = (*it);
            classes.erase(it);
            newc.ajouter();

            classes.insert(newc);
            valeurs.insert(std::make_pair(newc, elem));
        }

    }


    void ajouter(double d) {
        Echantillon e;
        e.ajouter(d);
        ajouter(e);
    }
};


template <typename C>
class ComparateurQuantite {

    public:
    bool operator()(const C& c1, const C& c2) const {
        return ((c1.getQuantite() != c2.getQuantite())?(c1.getQuantite()>c2.getQuantite()):(c1.getBorneInf()<c2.getBorneInf()));
    }
};

#endif