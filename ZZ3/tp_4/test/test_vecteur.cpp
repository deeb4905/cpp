// Entetes //---------------------------------------------------------------------------------------
#include <algorithm>
#include <deque>
#include <vecteur.hpp>

// Fonction principale //---------------------------------------------------------------------------
int main(void) {
 complexe_t::stats();

 Vecteur v1;
 Vecteur v2;

 std::cout << std::endl << "v1 = " << v1 << std::endl;
 std::cout << "v2 = " << v2 << std::endl;
 complexe_t::stats(); //1

 for (unsigned i = 0; i<v1.getTaille(); ++i) v1[i]=complexe_t(10*i,i*i);
 for (unsigned i = 0; i<v2.getTaille(); ++i) v2[i]=complexe_t(i,i+1);

 std::cout << std::endl << "v1 = " << v1 << std::endl;
 std::cout << "v2 = " << v2 << std::endl;
 complexe_t::stats(); //2

 Vecteur v3 = v1;

 std::cout << std::endl << "v3 = " << v3 << std::endl;
 complexe_t::stats(); //3

 Vecteur v4;

 v4=v1+v2;

 std::cout << std::endl << "v4 = " << v4 << std::endl;
 complexe_t::stats(); //4

 Vecteur v5;

 v5=v1*(v2+v4);

 std::cout << std::endl << "v5 = " << v5 << std::endl;
 complexe_t::stats(); //5

 std::deque<complexe_t> liste;

 for (unsigned i = 0; i<v5.getTaille(); ++i) liste.push_back(v5[i]);

 std::cout << std::endl << "liste = v5" << std::endl;
 complexe_t::stats();//6

 std::sort(liste.begin(),liste.end(),ComparateurComplexe());

 std::cout << std::endl;
 for (unsigned i = 0; i<liste.size(); ++i) std::cout << liste[i] << " ";
 std::cout << std::endl;
 complexe_t::stats();//7
}

// Fin //-------------------------------------------------------------------------------------------

/* 1/6      20 constructeurs par défaut
2/6         20 constructeurs ad hoc et 20 affectations par mouvement
3/6         10 constructeurs par défaut et 10 affectations par copie
4/6         20 cons def, 10 cons ad hoc, 10 aff mv, 10 aff copie
5/6         30 cons def, 10 cons ad hoc, 20 aff mv, 10 aff copie

1, 2, 3 pareil
4/6         20 cons def, 10 cons ad hoc, 10 aff mv
5/6         30 cons def, 20 cons ad hoc, 20 aff mv
*/
