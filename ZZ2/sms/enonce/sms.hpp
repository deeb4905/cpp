#ifndef __SMS
#define __SMS

#include <iostream>
#include <vector>
#include <queue>

class Reseau;
class MMS;

class Telephone
{
    std::string numero;
    Reseau* res;
    int nbMessages;

    public:

    Telephone(std::string);
    Telephone(std::string, Reseau*);
    Telephone();

    void setNumero(std::string);
    void setReseau(Reseau r);
    const std::string& getNumero() const;
    Reseau* getReseau() const;
    int getNbMessages() const;
    void setNbMessages(int);
    void textoter(std::string, std::string);
    void mmser(std::string, MMS*);

    bool operator<(const Telephone&) const;
};





class Reseau
{
    std::vector<Telephone> liste;
    
    
    public:

    void ajouter(std::string);
    std::string lister();
    Telephone& trouveTel(std::string);
};





class Message
{
    protected:
    
    static int cle;
    int id;
    
    std::string de;
    std::string a;
    std::string date;

    public:

    Message(std::string, std::string, std::string);

    static int getCle();
    int getId();
    std::string getDe() const;
    std::string getA() const;
    void setDe(std::string);
    void setA(std::string);
    virtual std::string afficher() const = 0;
};



class SMS: public Message
{
    protected:
    
    std::string texte;
    
    public:
    
    SMS(std::string, std::string, std::string);

    void setTexte(std::string);
    std::string getTexte() const;
    std::string afficher() const override;
};




class Media
{
    public:
    
    Media();
    virtual std::string afficher() const = 0;
};

class Image: public Media
{
    public:

    Image();

    std::string afficher() const override;
};

class Son: public Media
{
    public:

    Son();

    std::string afficher() const override;
};

class Video: public Media
{
    public:

    Video();

    std::string afficher() const override;
};





class MMS: public SMS
{
    public:

    MMS(std::string, std::string, std::string);

    void joindre(Media*);
};



class MauvaisNumero: public std::exception
{
    public:

    const char* what();
};


#endif