#ifndef VALEUR_HPP
#define VALEUR_HPP

#include <string>

class Valeur {
    double nombre;
    std::string nom = "inconnu";
    
    public:

    // Constructors
    Valeur(double v) {
        nombre = v;
    }

    Valeur(double v, std::string n) {
        nombre = v;
        nom = n;
    }
    
    Valeur() {
        nombre = 0;
    }


    // Getters/Setters
    double getNombre() const {
        return nombre;
    }
    double getNote() const {
        return nombre;
    }

    void setNombre(double v) {
        nombre = v;
    }
    void setNote(double v) {
        nombre = v;
    }

    std::string getEtudiant() const {
        return nom;
    }
    void setEtudiant(std::string newName) {
        nom = newName;
    }




    bool operator<(Valeur& v2) {
        return nombre < v2.getNombre();
    }

    bool operator>(Valeur& v2) {
        return nombre > v2.getNombre();
    }
};

#endif