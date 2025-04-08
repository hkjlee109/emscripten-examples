#include "base_wrapper.hpp"

namespace abstract {

void base_wrapper_t::invoke(const std::string &s)
{
    return call<void>("invoke", s);
}

} // abstarct