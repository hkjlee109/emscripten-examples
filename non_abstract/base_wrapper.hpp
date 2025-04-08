#pragma once 

#include "base.hpp"
#include <emscripten/bind.h>

namespace non_abstract {

struct base_wrapper_t : public emscripten::wrapper<base_t> 
{
    EMSCRIPTEN_WRAPPER(base_wrapper_t);

    void invoke(const std::string &s);
};

EMSCRIPTEN_BINDINGS(interface) {
    emscripten::class_<base_t>("base_t")
        .allow_subclass<base_wrapper_t>("base_wrapper_t")
        .function("invoke", emscripten::optional_override([](base_t& self, const std::string& s) {
            return self.base_t::invoke(s);
        }))
        ;
}

} // non_abstarct

