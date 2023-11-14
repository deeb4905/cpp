#ifndef BOULARD_CHAINE_HPP
#define BOULARD_CHAINE_HPP

#include <sstream>
#include "exception.hpp"


std::string chaine(std::string);
std::string chaine(int);
std::string chaine(double);
template <typename... Args> std::string chaine(Args&...);
template <typename... Args> std::string chaine(std::tuple<Args...>);



// General
template <typename T>
std::string chaine(T v)
{
    throw ExceptionChaine(v);
}



std::string chaine(std::string v)
{
    return v;
}

std::string chaine(int v)
{
    std::stringstream s;
    s << v;
    return s.str();
}

std::string chaine(double v)
{
    return std::to_string(v);
}



template <typename Arg, typename... Args>
std::string chaine(Arg arg1, Args&... args)
{    
    return (chaine(arg1) + ... + (" " + chaine(args)));

}


template <typename T, size_t... Is>
std::string chaine_tuples(T& t, std::index_sequence<Is...>)
{
    return ((chaine(std::get<Is>(t)) + " ") + ...);
}

template <typename... Args>
std::string chaine(std::tuple<Args...> t)
{
    return chaine_tuples(t, std::index_sequence_for<Args...>{});
}

// https://en.cppreference.com/w/cpp/utility/integer_sequence
// Difference index_sequence, make_index_sequence, index_sequence_for






template <int N>
struct Puissance
{
    static double valeur(double n)
    {
        return Puissance<N-1>::valeur(n)*n;
    }
};
template <>
struct Puissance<0>
{
    static double valeur(double)
    {
        return 1;
    }
};



template <int N>
struct Factorielle
{
    static const unsigned long valeur = N*Factorielle<N-1>::valeur;
};
template <>
struct Factorielle<0>
{
    static const unsigned long valeur = 1;
};



template <int N>
struct Exponentielle
{
    static double valeur(double d)
    {
        return Exponentielle<N-1>::valeur(d) + Puissance<N>::valeur(d) / Factorielle<N>::valeur;
    }
};
template <>
struct Exponentielle<0>
{
    static double valeur(double)
    {
        return 1;
    }
};



template <int N>
struct Cosinus
{
    static double valeur(double d)
    {
        return Cosinus<N-1>::valeur(d) + Puissance<N>::valeur(-1) * Puissance<2*N>::valeur(d) / Factorielle<2*N>::valeur;
    }
};
template <>
struct Cosinus<0>
{
    static double valeur(double)
    {
        return 1;
    }
};


template <int N>
struct Sinus
{
    static double valeur(double d)
    {
        return Sinus<N-1>::valeur(d) + Puissance<N>::valeur(-1) * Puissance<2*N+1>::valeur(d) / Factorielle<2*N+1>::valeur;
    }
};
template <>
struct Sinus<0>
{
    static double valeur(double d)
    {
        return d;
    }
};

#endif



