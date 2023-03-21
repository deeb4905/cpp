#include <iostream>

using namespace std;

class A
{
public:
  int attr;

public:
  A() { cout << "A "; }
  ~A() { cout << "~A "; }
};

class B : virtual public A
{
public:
  B() { cout << "B ";}
  ~B() { cout << "~B "; }
};

class C : virtual public A
{
public:
  C() { cout << "C "; }
  ~C() { cout << "~C "; }
};

class D : public B, public C
{
public:
  D() { cout << "D "; }
  ~D() { cout << "~D "; }
};

int main(int, char **)
{
  D d;
  cout << d.attr << endl;
  return 0;
}
