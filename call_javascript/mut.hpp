#pragma once 

#include <emscripten/bind.h>
#include <string>

namespace call_javascript {
    
class mut_t
{
public:
    mut_t();

    void call();
};

EMSCRIPTEN_BINDINGS(mut_t) 
{
    emscripten::class_<mut_t>("mut_t")
        .constructor<>()
        .function("call", &mut_t::call);
}

} // call_javascript
