#include <emscripten/bind.h>

class classes_t {
public:
    classes_t(int x, std::string y);

    void increment_x();

    int get_x() const;
    void set_x(int x);

    static std::string get_string_from_instance(const classes_t &instance);

private:
    int _x;
    std::string _y;
};

EMSCRIPTEN_BINDINGS(classes) {
    emscripten::class_<classes_t>("classes_t")
        .constructor<int, std::string>()
        .function("increment_x", &classes_t::increment_x)
        .property("x", &classes_t::get_x, &classes_t::set_x)
        .class_function("get_string_from_instance", &classes_t::get_string_from_instance);
}