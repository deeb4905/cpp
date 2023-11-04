#ifndef BOULARD_EXCEPTION_HPP
#define BOULARD_EXCEPTION_HPP

#include <string>
#include <exception>

#include "demangle.hpp"



class ExceptionChaine : public std::exception
{
    std::string s;
    

    public:

    template <typename T>
    ExceptionChaine(T v):s("Conversion en chaine impossible pour '"+demangle(typeid(v).name())+"'"){}


    const char* what() const throw() override
    {
        return s.c_str();
    }
};

#endif