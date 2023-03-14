#include <algorithm>
#include <vector>
#include <iostream>
#include <iterator>
#include <queue>
#include <map>
#include <utility>
#include "ZZ.hpp"
//#include "Fonctions.hpp"

const std::string& first(const std::pair<std::string,std::string>& p) { return p.first; }
//const std::string& paire(const std::pair<std::string,std::string>& p) { return p.first + p.second; }
const std::pair<std::string,std::string> self(const std::pair<std::string,std::string>& p) { return p; }
int self2(int const& i){return i;}

int main(int argc, char** argv)
{
    if(argc == 1)
    {
        //
    }
    else
    {
        //
    }
    std::map<std::string, std::string> liste;
    std::map<std::string, std::string> liste2;

    liste["un"] = "deux";
    liste["trois"] = "quatre";

    /*std::map<std::string, std::string>::const_iterator it = liste.begin();

    while(it!=liste.end())
    {  
        std::cout << it->first  << " " << it->second << std::endl;
        ++it;
    }

    transform(liste.begin(), liste.end(), 
    std::ostream_iterator<std::string>(std::cout, " "), first);*/

    //liste2.resize(liste.size());
    copy(liste.begin(), liste.end(), liste2.begin());


    
    return 0;
}