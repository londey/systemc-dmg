#pragma once

#include <systemc>

namespace dmg
{

/// @brief 
struct DmgSoc : public sc_core::sc_module
{
    SC_HAS_PROCESS(DmgSoc);

    sc_core::sc_in<bool> clk;

    DmgSoc(sc_core::sc_module_name name);
};

}
