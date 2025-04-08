#include "base_wrapper.hpp"

namespace non_abstract {

void base_wrapper_t::invoke(const std::string &s)
{
    return call<void>("invoke", s);
}

} // non_abstarct