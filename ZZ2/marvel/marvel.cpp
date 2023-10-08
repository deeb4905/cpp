#include "marvel.hpp"

Personne Personne::INCONNU{"Inconnu", "Inconnu", INDETERMINE};

Personne::Personne(std::string p, std::string n, Genre g) : prenom(p), nom(n), genre(g) {}
Personne::Personne(std::string p, std::string n) : Personne(p, n, Personne::INDETERMINE) {}


std::string Personne::getNom() const
{
    return nom;
}

std::string Personne::getPrenom() const
{
    return prenom;
}

Personne::Genre Personne::getGenre() const
{
    return genre;
}


bool Personne::operator==(Personne p2) const
{
    return (nom == p2.getNom() && prenom == p2.getPrenom() && genre == p2.getGenre());
}

void Personne::afficher(std::stringstream& ss) const
{
    ss << prenom.c_str() << " " << nom << " [";

    switch(genre)
    {
        case(HOMME):
            ss << "HOMME]";
            break;
        case(FEMME):
            ss << "FEMME]";
            break;
        case(INDETERMINE):
            ss << "INDETERMINE]";
            break;
    }
}








Super::Super(std::string n, Personne p):nom(n), personne(p), anonyme(1), niveau(0){}

void Super::setIdentite(Personne p)
{
    personne = p;
    anonyme = true;
}

void Super::setNom(std::string n)
{
    nom = n;
}

std::string Super::getNom() const
{
    return nom;
}

bool Super::estAnonyme() const
{
    return anonyme;
}

int Super::getNiveau() const
{
    return niveau;
}

void Super::enregistrer()
{
    anonyme = 0;
}

const Personne& Super::getIdentite()
{
    if(anonyme)
    {
        throw AnonymeException();
    }
    else
    {
        return personne;
    }
}

void Super::ajouter(Capacite* c)
{
    niveau += c->getNiveau();
}











Capacite::Capacite(std::string n, int ni):nom(n), niveau(ni){}
Capacite::~Capacite(){}

int Capacite::getNiveau() const
{
    return niveau;
}
std::string Capacite::getNom() const
{
    return nom;
}


Physique::Physique(std::string n, int ni):Capacite(n, ni){}
Psychique::Psychique(std::string n, int ni):Capacite(n, ni){}
Materiel::Materiel(std::string n, int ni):Capacite(n, ni){}


Physique* Physique::clone() const
{
    Physique* newCap = new Physique(nom, niveau);
    return newCap;
}

Psychique* Psychique::clone() const
{
    Psychique* newCap = new Psychique(nom, niveau);
    return newCap;
}

Materiel* Materiel::clone() const
{
    Materiel* newCap = new Materiel(nom, niveau);
    return newCap;
}


void Physique::utiliser(std::stringstream& log) const
{
    log << nom << " [" << niveau << "]";
}

void Psychique::utiliser(std::stringstream& log) const
{
    log << nom << " [" << niveau << "]";
}

void Materiel::utiliser(std::stringstream& log) const
{
    log << nom << " [" << niveau << "] en action";
}





Equipe::Equipe(std::string n):nom(n), nombre(0), niveau(0){}

int Equipe::getNombre() const
{
    return nombre;
}

int Equipe::getNiveau() const
{
    return niveau;
}

void Equipe::ajouter(Super* s)
{
    niveau += s->getNiveau();
    nombre++;
}








void operator<<(std::stringstream& ss, Personne p)
{
    p.afficher(ss);
}


const char* AnonymeException::what()
{
    return "identite anonyme";
}