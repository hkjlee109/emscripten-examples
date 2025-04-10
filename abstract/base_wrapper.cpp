#include "base_wrapper.hpp"

namespace abstract {

void base_wrapper_t::invoke_type_1(const std::string &s)
{
    return call<void>("invoke_type_1", s);
}

void base_wrapper_t::invoke_type_2(const std::string &s)
{
    return call<void>("invoke_type_2", s);
}

} // abstarct