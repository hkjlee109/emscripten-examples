#pragma once 

#include <string>

namespace classes {

class animal_t 
{
public:
    animal_t(std::string name, int age);
    virtual ~animal_t(); 

    virtual std::string speak() = 0;

    std::string get_name() const;
    void set_name(std::string name);
    
    int get_age() const;
    void set_age(int age);

    static std::string get_name_from_instance(const animal_t &instance);

private:
    std::string _name;
    int _age;
};

} // classes
