#ifndef NULL_POINTER_HPP
#define NULL_POINTER_HPP

#include <iostream>

class null_pointer : public std::logic_error
{
    public:
    
    null_pointer();
    const char* what() const noexcept override;
};

#endif