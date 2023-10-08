#include <algorithm>
#include <vector>
#include <iostream>
#include <iterator>
#include <queue>
#include <map>
#include <utility>
#include <fstream>
#include "ZZ.hpp"
//#include "Fonctions.hpp"

const std::string& first(const std::pair<std::string,std::string>& p) { return p.first; }
const std::pair<std::string,std::string> self(const std::pair<std::string,std::string>& p) { return p; }
const std::string paire(const std::pair<std::string,std::string>& p)
{
    return p.first + " " + p.second;
}

int self2(int const& i){return i;}

int main(int argc, char** argv)
{
    std::map<std::string, std::string> liste;

    liste["un"] = "deux";
    liste["trois"] = "quatre";
    
    
    std::string fileName("exemple.txt");
    if(argc == 1)
    {
        transform(liste.begin(), liste.end(), 
        std::ostream_iterator<std::string>(std::cout, "\n"), paire);
    }
    else
    {
        std::ifstream fichier(fileName.c_str());
        int ok = 0;
        while(!fichier.eof())
        {
            std::string cle, valeur;
            fichier >> cle >> valeur;
            std::cout << cle << " " << valeur << std::endl;
            if(cle == argv[1]){ok++;}
        }
        if(ok)
        {
            std::cout << "trouvé" << std::endl;
        }
        fichier.close();
    }


    

    /*std::map<std::string, std::string> liste2;
    liste2.insert(liste.begin(), liste.end());


    std::map<std::string, std::string>::const_iterator it = liste.begin();

    while(it!=liste.end())
    {  
        std::cout << it->first  << " " << it->second << std::endl;
        ++it;
    }*/


    
    return 0;
}