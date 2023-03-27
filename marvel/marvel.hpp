#ifndef marvel__hpp
#define marvel__hpp

#include <iostream>
#include <string>
#include <sstream>

class Capacite;

class Personne
{
    public :

    enum Genre
    {HOMME, FEMME, INDETERMINE};

    static Personne INCONNU;

    Personne(std::string, std::string, Genre);
    Personne(std::string, std::string);

    std::string getNom() const;
    std::string getPrenom() const;
    Genre getGenre() const;


    bool operator==(Personne) const;
    void afficher(std::stringstream&) const;



    private:

    std::string prenom;
    std::string nom;
    Genre genre;
};





class Super
{
    std::string nom;
    Personne personne;
    bool anonyme;
    int niveau;

    public:

    Super(std::string, Personne);

    void setIdentite(Personne);
    void setNom(std::string);
    std::string getNom() const;
    bool estAnonyme() const;
    int getNiveau() const;
    void enregistrer();
    const Personne& getIdentite();
    void ajouter(Capacite*);
};





class Capacite
{
    protected:

    std::string nom;
    int niveau;


    public:

    Capacite(std::string, int);
    virtual ~Capacite();

    int getNiveau() const;
    std::string getNom() const;
    virtual Capacite* clone() const = 0;
    virtual void utiliser(std::stringstream&) const = 0;
};

class Physique: public Capacite
{
    public:

    Physique(std::string, int);
    Physique* clone() const override;
    void utiliser(std::stringstream&) const override;
};

class Psychique: public Capacite
{
    public:

    Psychique(std::string, int);
    Psychique* clone() const override;
    void utiliser(std::stringstream&) const override;
};

class Materiel: public Capacite
{
    public:

    Materiel(std::string, int);
    Materiel* clone() const override;
    void utiliser(std::stringstream&) const override;
};






class Equipe
{
    std::string nom;
    int nombre;
    int niveau;


    public:

    Equipe(std::string);

    int getNombre() const;
    int getNiveau() const;
    void ajouter(Super*);
};






class AnonymeException: public std::exception
{
    public:
    const char* what();
};


void operator<<(std::stringstream&, Personne);


#endif
