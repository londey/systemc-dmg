#pragma once

#include <systemc>

namespace dmg
{

struct DmgCpu : public sc_core::sc_module
{
    SC_HAS_PROCESS(DmgCpu);

    sc_core::sc_in<bool> clk;

    DmgCpu(sc_core::sc_module_name name);
};

}

