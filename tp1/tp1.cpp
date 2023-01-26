#include <iostream>
#include <string>

int main(int, char **) {  // parametres muets
  std::string l1;     // type chaines de caracteres"
  std::string l2;

  std::cin  >> l1;
  std::cin  >> l2;

  if(l1.compare(l2) < 1)
  {
    std::cout << l1 << std::endl;
  }
  else
  {
    std::cout << l2 << std::endl;
  }
  std::cout << l1.length() << std::endl;
  std::cout << l2.length() << std::endl;


  return 0;
}