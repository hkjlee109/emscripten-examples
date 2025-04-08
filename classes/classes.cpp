#include "classes.hpp"

classes_t::classes_t(int x, std::string y)
    : _x(x)
    , _y(y)
{}

void classes_t::increment_x() 
{
    ++_x;
}

int classes_t::get_x() const 
{ 
    return _x; 
}

void classes_t::set_x(int x) 
{ 
    _x = x; 
}

std::string classes_t::get_string_from_instance(const classes_t &instance) 
{
    return instance._y;
}
