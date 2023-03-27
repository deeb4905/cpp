#include <iostream>
#include <queue>
#include <algorithm>
#include "sms.hpp"

int Message::cle = 0;

Telephone::Telephone(std::string n, Reseau* r):numero(n), res(r), nbMessages(0){}
Telephone::Telephone(std::string n):numero(n), nbMessages(0){}
Telephone::Telephone():Telephone(""){}

const std::string& Telephone::getNumero() const
{
    return numero;
}

void Telephone::setNumero(std::string n)
{
    numero = n;
}

bool Telephone::operator<(const Telephone& t) const
{
    return numero < t.getNumero();
}

/*
void Telephone::setReseau(Reseau r)
{
    res = r;
}*/

Reseau* Telephone::getReseau() const
{
    return res;
}

int Telephone::getNbMessages() const
{
    return nbMessages;
}

void Telephone::setNbMessages(int v)
{
    nbMessages = v;
}

void Telephone::textoter(std::string num, std::string mes)
{
    nbMessages++;
    try
    {
        res->trouveTel(num).setNbMessages(res->trouveTel(num).getNbMessages() + 1);
    }
    catch(MauvaisNumero& e)
    {
        //
    }
}

void Telephone::mmser(std::string num, MMS* memesse)
{
    nbMessages++;
    try
    {
        res->trouveTel(num).setNbMessages(res->trouveTel(num).getNbMessages() + 1);
        memesse->setDe(numero);
        memesse->setA(num);
    }
    catch(MauvaisNumero& e)
    {
        //
    }
}







void Reseau::ajouter(std::string n)
{
    liste.push_back(Telephone(n, this));
    std::sort(liste.begin(), liste.end());
}

std::string Reseau::lister()
{
    std::string s;

    std::vector<Telephone>::iterator i;
    for(i=liste.begin();i!=liste.end();i++)
    {
        s += (*i).getNumero();
        s += "\n";
    }

    return s;
}

Telephone& Reseau::trouveTel(std::string n)
{
    //return *find(liste.begin(), liste.end(), getNumero == n);

    std::vector<Telephone>::iterator i;
    for(i=liste.begin();i!=liste.end();i++)
    {
        if((*i).getNumero() == n)
        {
            return *i;
        }
    }
    throw(MauvaisNumero());
}





Message::Message(std::string e, std::string d, std::string da):de(e), a(d), date(da)
{
    id = cle;
    cle++;
}

int Message::getCle()
{
    return cle;
}

int Message::getId()
{
    return id;
}

std::string Message::getDe() const
{
    return de;
}

std::string Message::getA() const
{
    return a;
}

void Message::setA(std::string n)
{
    a = n;
}

void Message::setDe(std::string n)
{
    de = n;
}




SMS::SMS(std::string e, std::string d, std::string da):Message(e, d, da){}

void SMS::setTexte(std::string t)
{
    if(t.length() < 160)
    {
        texte = (t + texte);
    }
}

std::string SMS::getTexte() const
{
    return texte;
}

std::string SMS::afficher() const
{
    return texte.c_str();
}



Media::Media(){}



Image::Image():Media(){}
Son::Son():Media(){}
Video::Video():Media(){}

std::string Image::afficher() const
{
    return "[[image]]";
}

std::string Son::afficher() const
{
    return "[[son]]";
}

std::string Video::afficher() const
{
    return "[[video]]";
}




MMS::MMS(std::string a, std::string b, std::string c):SMS(a, b, c){}

void MMS::joindre(Media* pj)
{
    texte += pj->afficher();
}





const char* MauvaisNumero::what()
{
    return "mauvais numero";
}