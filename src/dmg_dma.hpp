#pragma once

#include <systemc>

namespace dmg
{

/// @brief Direct Memory Access
struct DmgDma : public sc_core::sc_module
{
    SC_HAS_PROCESS(DmgDma);

    sc_core::sc_in<bool> clk;

    DmgDma(sc_core::sc_module_name name);
};

}
