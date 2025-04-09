#pragma once 

#include "animal.hpp"

#include <emscripten/bind.h>
#include <string>

namespace classes {

class dog_t : public animal_t
{
public:
    dog_t(std::string name, int age);

    virtual std::string speak() override;

    int get_age() { 
        return 10;
    }
};

EMSCRIPTEN_BINDINGS(dog_t) {
    emscripten::class_<animal_t>("animal_t")
        .function("get_age", &animal_t::get_age)
        .class_function("get_name_from_instance", &animal_t::get_name_from_instance);
    emscripten::class_<dog_t, emscripten::base<animal_t>>("dog_t")
        .constructor<std::string, int>()
        .function("speak", &dog_t::speak)
        .property("name", &dog_t::get_name, &dog_t::set_name);
}

} // classes
