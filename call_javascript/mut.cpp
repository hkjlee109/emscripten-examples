#include "mut.hpp"

namespace call_javascript {

extern "C" {
    extern void do_something(const char* message);
} // "C"

mut_t::mut_t()
{
}

void mut_t::call()
{
    do_something("call javascript!");
}

} // call_js
