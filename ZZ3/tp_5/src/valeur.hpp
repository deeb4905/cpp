#ifndef VALEUR_HPP
#define VALEUR_HPP

class Valeur {
    double nombre;
    
    public:

    // Constructors
    Valeur(double v) {
        nombre = v;
    }
    
    Valeur() {
        nombre = 0;
    }


    // Getters/Setters
    double getNombre() const {
        return nombre;
    }

    void setNombre(double v) {
        nombre = v;
    }




    bool operator<(Valeur& v2) {
        return nombre < v2.getNombre();
    }

    bool operator>(Valeur& v2) {
        return nombre > v2.getNombre();
    }
};

#endif