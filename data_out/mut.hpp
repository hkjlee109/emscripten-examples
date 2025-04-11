#pragma once 

#include <emscripten/bind.h>
#include <string>
#include <vector>

namespace data_out {
    
struct command_t 
{
    constexpr command_t()
    : count{0}
    , index_buffer_offset{0}
    , vertex_buffer_offset{0} {}

    constexpr command_t(uint32_t _count,
                        uint32_t _index_buffer_offset,
                        uint32_t _vertex_buffer_offset)
    : count{_count}
    , index_buffer_offset{_index_buffer_offset}
    , vertex_buffer_offset{_vertex_buffer_offset} {}

    uint32_t count;
    uint32_t index_buffer_offset;
    uint32_t vertex_buffer_offset;
};

class mut_t
{
public:
    mut_t();

    void flush();

private:
    std::vector<command_t> _commands;
};


std::vector<command_t> * convertCommandVectorFromPtr(uintptr_t ptr) {
    return reinterpret_cast<std::vector<command_t> *>(ptr);
}

EMSCRIPTEN_BINDINGS(data_out) 
{
    emscripten::value_object<command_t>("command_t")
        .field("count", &command_t::count)
        .field("index_buffer_offset", &command_t::index_buffer_offset)
        .field("vertex_buffer_offset", &command_t::vertex_buffer_offset);

    emscripten::class_<mut_t>("mut_t")
        .constructor<>()
        .function("flush", &mut_t::flush);
        
    emscripten::register_vector<command_t>("command_vector_t")
        .constructor(&convertCommandVectorFromPtr, emscripten::allow_raw_pointers());
}

} // data_out
