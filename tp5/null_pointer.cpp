#include <iostream>
#include <cstring>
#include <sstream>
#include "null_pointer.hpp"

null_pointer::null_pointer(std::string s):std::logic_error(s){}
null_pointer::null_pointer():null_pointer("message par defaut d'exception null_pointer"){}

/*const char* null_pointer::what() const noexcept override
{
    return "null_pointer exception was thrown";
}*/