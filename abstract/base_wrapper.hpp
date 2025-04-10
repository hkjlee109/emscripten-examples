#pragma once 

#include "base.hpp"
#include <emscripten/bind.h>

namespace abstract {

struct base_wrapper_t : public emscripten::wrapper<base_t> 
{
    EMSCRIPTEN_WRAPPER(base_wrapper_t);

    void invoke_type_1(const std::string &s) override;
    void invoke_type_2(const std::string &s) override;
};

EMSCRIPTEN_BINDINGS(interface) 
{
    emscripten::class_<base_t>("base_t")
        .allow_subclass<base_wrapper_t>("base_wrapper_t")
        .function("invoke_type_1", &base_t::invoke_type_1, emscripten::pure_virtual())
        .function("invoke_type_2", emscripten::optional_override([](base_t& self, const std::string& s) {
            return self.base_t::invoke_type_2(s);
        }));
}

} // abstarct

