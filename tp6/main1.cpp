#include <iostream>
#include <cstring>
#include <sstream>

class M {
 public:  
  M() {
    std::cout << "M::M()" << std::endl;
  }
   ~M() {
    std::cout << "M::~M()" << std::endl;
  }
    M(const M&) {
    std::cout << "M::M(const M&)" << std::endl;
  }

  void operator=(const M&)
  {
    std::cout << "affectation M" << std::endl;
  }
  
};

class F : public M {
 public:
  F() {
    std::cout << "F::F()" << std::endl;
  }  
~F() {
    std::cout << "F::~F()" << std::endl;
  }
    
  F(const F& f):M(f) {
    std::cout << "F::F(const F&)" << std::endl;
  } 

  void operator=(const F& f)
  {
    std::cout << "affectation F" << std::endl;
    M::operator=(f);
  }
  
};

class A {

    M attribut;

 public:  
  A() {
    std::cout << "A::A())" << std::endl;
  }
   ~A() {
    std::cout << "A::~A()" << std::endl;
  }
    A(const A&) {
    std::cout << "A::A(const A&)" << std::endl;
  }

  void operator=(const A&)
  {
    std::cout << "affectation A" << std::endl;
  }
  
};

int main(int, char**) {

  A a1;
  A a2 = a1;

  return 0;
}