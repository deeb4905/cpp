#ifndef AGREGATEUR_HPP
#define AGREGATEUR_HPP

template<typename T>
class Agregateur
{
    int capacite;
    int taille;
    T* tab;


    public:

    // Constructors/Destructors
    Agregateur();
    Agregateur(const Agregateur<T>&); // Constructeur de copie
    ~Agregateur();

    // Getters/Setters
    int capacity() const;
    int size() const;
    T const * getTab() const;

    // Other
    Agregateur<T>& operator=(const Agregateur<T>&);
    void push_back(T);
    T at(int) const;
    Agregateur<T>& concat(const Agregateur<T>&);
    void afficher() const;
};

#endif