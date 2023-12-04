#include <cstdlib>
#include <iostream>
#include <thread>
#include <mutex>
#include <condition_variable>
/*
std::mutex mutex;
std::condition_variable condition;

void zzz(unsigned n) {

    { std::lock_guard<std::mutex> verrou(mutex);

    std::cout << "[" << n << "] zzz..." << std::endl; }

    std::this_thread::sleep_for(std::chrono::seconds(1));
}

int main() {

    std::thread t[4];
    for (unsigned i = 0; i<4; ++i) t[i] = std::thread(zzz,i);
    for (unsigned i = 0; i<4; ++i) t[i].join();


 return EXIT_SUCCESS;
}*/

template <typename Func>
void for_sequentiel(int x, int y, Func f) {
    for(int i=x;i<y;i++) {
        f(i);
    }
}

template <int N, typename Func>
void for_parallele(int x, int y, Func f) {

    std::thread t[N];
    for (unsigned i = 0; i<N; ++i) t[i] = std::thread(for_sequentiel<Func>,i*((y-x)/N), (i+1)*((y-x)/N), f);
    for (unsigned i = 0; i<4; ++i) t[i].join();
}



// Entetes //---------------------------------------------------------------------------------------
#include "nombre.hpp"

// Variables globales //----------------------------------------------------------------------------
unsigned compteur = 0;

// Fonction principale //---------------------------------------------------------------------------
int main() {
 const unsigned taille = 24;

 std::vector<Nombre> a(taille);
 std::vector<Nombre> b(taille);
 std::vector<Nombre> c(taille);

 //for_sequentiel(0,taille, [&] (unsigned i) { a[i] = ++compteur; } );
 //for_sequentiel(0,taille, [&] (unsigned i) { b[i] = ++compteur; } );
 for_parallele<4>(0,taille, [&] (unsigned i) { a[i] = ++compteur; } );
 for_parallele<4>(0,taille, [&] (unsigned i) { b[i] = ++compteur; } );

 std::cout << "a = " << a << std::endl;
 std::cout << "b = " << b << std::endl;
 std::cout << "compteur = " << compteur << std::endl;

//  for (unsigned i = 0; i<taille; ++i) c[i] = a[i]*b[i];
 //for_sequentiel(0,taille, [&] (unsigned i) { c[i] = a[i]*b[i]; } );
 for_parallele<4>(0,taille, [&] (unsigned i) { c[i] = a[i]*b[i]; } );

 std::cout << "c = " << c << std::endl;

 return 0;
}

// Fin //-------------------------------------------------------------------------------------------




