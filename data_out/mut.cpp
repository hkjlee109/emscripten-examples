#include "mut.hpp"

namespace data_out {

extern "C" {
    extern void render(std::vector<command_t> commands, uint16_t size);
} // "C"

mut_t::mut_t()
{
    _commands.push_back(command_t{4, 0, 0});
    _commands.push_back(command_t{2, 24, 12});
    _commands.push_back(command_t{2, 36, 18});
}

void mut_t::flush()
{
    render(_commands, _commands.size());
}

} // data_out
