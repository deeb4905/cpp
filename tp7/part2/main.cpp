#include <iostream>
#include <cstring>
#include <sstream>
#include "List.hpp"
#include "List.impl.hpp"

int main(int, char**)
{
    List<int> l1{};
    std::cout << l1.empty() << std::endl;


    l1.display();

    l1.push_back(1);

    //l1.display();


    //std::cout << "Je pop front " << l1.pop_front() << std::endl;
    /*l1.display();
    std::cout << l1.size();
    std::cout << "Je pop back " << l1.pop_back() << " essai" << std::endl;
*/
    //std::cout << l1.size();
    //l1.display();

    return 0;
}