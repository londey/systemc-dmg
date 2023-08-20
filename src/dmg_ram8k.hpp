#pragma once

#include <array>
#include <systemc>

namespace dmg
{

/// @brief 8KiB RAM
///
/// This is the 8KiB RAM (SHARP LH5164LN-10) that is used by the DMG.
/// It is used for the working RAM, the video RAM and the OAM.
/// 
/// 
struct DmgRam8k : public sc_core::sc_module
{
    SC_HAS_PROCESS(DmgRam8k);

    sc_core::sc_in<sc_dt::sc_uint<13>> address;
    sc_core::sc_in<bool> write_enable;
    sc_core::sc_in<bool> output_enable;

    sc_core::sc_inout<sc_dt::sc_uint<8>> data;

    DmgRam8k(sc_core::sc_module_name name);

private:
    std::array<sc_dt::sc_uint<8>, 8192> ram_data_;
};


}
