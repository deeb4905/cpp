#ifndef CHAINE_HPP
#define CHAINE_HPP

class Chaine
{
    int capacite;
    char* tab;


    public:

    // Constructors/Destructors
    Chaine();
    Chaine(char const *);
    Chaine(int);
    Chaine(const Chaine&); // Constructeur de copie
    ~Chaine();

    // Getters/Setters
    int getCapacite() const;
    char const * c_str() const;

    // Other
    void afficher(std::ostream& = std::cout) const;
};

#endif