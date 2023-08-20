#pragma once

#include <systemc>

namespace dmg
{

/// @brief Boot ROM
struct DmgBootRom : public sc_core::sc_module
{
    SC_HAS_PROCESS(DmgBootRom);

    sc_core::sc_in<bool> clk;

    DmgBootRom(sc_core::sc_module_name name);
};

}
