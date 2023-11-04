#ifndef BOULARD_CHAINE_HPP
#define BOULARD_CHAINE_HPP

#include <sstream>
#include "exception.hpp"

std::string chaine(std::string);
std::string chaine(int);
std::string chaine(double);
template <typename... Args>
std::string chaine(Args&...);
template <typename... Args>
std::string chaine(std::tuple<Args...>);



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


/*
template <typename... Args>
std::string chaine(Args&... args)
{    
    return ((" " + chaine(args)) + ...);

}*/

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
// Pourquoi on prend une sequence pour se servir que de Is

// Pourquoi 

#endif