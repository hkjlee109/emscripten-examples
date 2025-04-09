#include "animal.hpp"

namespace classes {

animal_t::animal_t(std::string name, int age)
    : _name{name}
    , _age{age} 
{
}

animal_t::~animal_t()
{
}

std::string animal_t::get_name() const 
{
    return _name;
}

void animal_t::set_name(std::string name)
{
    _name = name;
}
    
int animal_t::get_age() const
{
    return _age;
}

void animal_t::set_age(int age)
{
    _age = age;
}

std::string animal_t::get_name_from_instance(const animal_t &instance) 
{
    return instance._name;
}

} // classes
