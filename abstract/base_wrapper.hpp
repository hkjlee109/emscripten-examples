#pragma once 

#include "base.hpp"
#include <emscripten/bind.h>

namespace abstract {

struct base_wrapper_t : public emscripten::wrapper<base_t> 
{
    EMSCRIPTEN_WRAPPER(base_wrapper_t);

    void invoke(const std::string &s);
};

EMSCRIPTEN_BINDINGS(interface) {
    emscripten::class_<base_t>("base_t")
        .allow_subclass<base_wrapper_t>("base_wrapper_t")
        .function("invoke", &base_t::invoke, emscripten::pure_virtual())
        ;
}

} // abstarct

