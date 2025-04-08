#pragma once 

#include <string>

namespace non_abstract {

struct base_t 
{
    virtual void invoke(const std::string &s);
};

} // non_abstarct
