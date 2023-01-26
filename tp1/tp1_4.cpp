#include <iostream>

using std::cout;
using std::endl;

/*
int main(int, char**) {
   int * p = new int;

   *p = 3;
   cout << *p << endl;

   delete p;

   return 0;
}*/

int main(int, char**) {
   const int TAILLE = 500;

   int * p = new int[TAILLE];

   for(auto i = 0; i< TAILLE; ++i ) p[i] = i;
   for(auto i = 0; i< TAILLE; ++i ) cout << p[i] << endl;

   //delete p;   
   delete [] p;

   return 0;
}