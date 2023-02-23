#include <iostream>
#include <cstring>
#include <sstream>
#include "null_pointer.hpp"

null_pointer::null_pointer():std::logic_error(){}

const char* null_pointer::what() const noexcept override
{
    return "null_pointer exception was thrown";
}