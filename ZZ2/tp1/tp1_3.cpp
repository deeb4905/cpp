#include <iostream>

void fonction1(int* a, int* b) {
    int c = *a;
    *a = *b;
    *b = c;
}

void fonction2(int& a, int& b) {
    int c = b;
    b = a;
    a = c;
}

int main(int, char **) {
    int  a = 3;
    int  b = 4;

    std::cout << a << " " << b << " " << std::endl;
    fonction2(a, b);
    std::cout << a << " " << b << " " << std::endl;

  return 0;
}