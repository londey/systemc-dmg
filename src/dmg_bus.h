#pragma once

#include <systemc>

namespace sc_dmg
{

struct DmgBus : public sc_core::sc_module
{
    SC_HAS_PROCESS(DmgBus);

    sc_core::sc_in<bool> clk;

    DmgBus(sc_core::sc_module_name name);
};

}

