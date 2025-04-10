#pragma once 

#include <string>

namespace abstract {

struct base_t 
{
    virtual ~base_t() {};
    virtual void invoke_type_1(const std::string &s) = 0;
    virtual void invoke_type_2(const std::string &s);
};

} // abstarct
