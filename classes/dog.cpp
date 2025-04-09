#include "dog.hpp"

namespace classes {

dog_t::dog_t(std::string name, int age)
    : animal_t(name, age)
{
}

std::string dog_t::speak()
{
    return "Woof! Woof!";
}

} // classes
