#pragma once 

#include <string>

namespace abstract {

struct base_t 
{
    virtual ~base_t() {};
    virtual void invoke(const std::string &s) = 0;
};

} // abstarct
