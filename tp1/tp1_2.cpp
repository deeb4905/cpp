#include <iostream>

int main()
{
    char s[10];
    //std::string s;
    //char * s = (char *) malloc(10 * sizeof(char));

    std::cin >> s;

    std::cout << "#" << s << "#" << std::endl;
    for (int i = 0; (int)s[i] != 0; ++i)
        std::cout << "@" << s[i] << "@" << (int)s[i] << "@" << std::endl;
    
    // A décommenter pour la verson char*
    //free(s);

    return 0;
}