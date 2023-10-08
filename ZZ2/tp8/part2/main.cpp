#include <algorithm>
#include <vector>
#include <iostream>
#include <iterator>
#include <queue>
#include <map>
#include <utility>
#include <fstream>
#include <ctime>
#include "Rand_0_100.hpp"

int main(int, char**)
{
    std::srand(std::time(nullptr));
    typedef std::vector<int> vecint;

    Rand_0_100 r;

    vecint v1(50);
    vecint v2(50);

    std::generate(v1.begin(), v1.end(), r);
    std::generate_n(v2.begin(), 50, r);

    copy(v1.begin(), v1.end(), std::ostream_iterator<int>(std::cout, "\n"));
    std::cout << "\n\n\n" << std::endl;
    copy(v2.begin(), v2.end(), std::ostream_iterator<int>(std::cout, "\n"));
    
    // std::accumulate(deb, fin, valeur init, operation optionnel)
    // std::min/max_element(deb, fin)
    // std::random_shuffle(deb, fin)
    // std::find(deb, fin, elem)
    return 0;
}