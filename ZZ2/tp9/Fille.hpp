#ifndef FILLE_HPP
#define FILLE_HPP

#include "Mere.hpp"

template<class T>
class Fille : public Mere<T> {
 public:
  Fille(T t): Mere<T>(t) {}
  void m() { 
       Mere<T>::a = Mere<T>::a*Mere<T>::a; 
       Mere<T>::f();
     }
};

#endif