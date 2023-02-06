#ifndef AGREGATEUR_HPP
#define AGREGATEUR_HPP

class Agregateur
{
    int capacite;
    int taille;
    float* tab;


    public:

    // Constructors/Destructors
    Agregateur();
    Agregateur(const Agregateur&); // Constructeur de copie
    ~Agregateur();

    // Getters/Setters
    int capacity() const;
    int size() const;
    float const * getTab() const;

    // Other
    Agregateur& operator=(const Agregateur&);
    void push_back(float);
    float at(int) const;
    Agregateur& concat(const Agregateur&);
    void afficher() const;
};

#endif