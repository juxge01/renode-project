/*
 * Copyright 2021 The CFU-Playground Authors
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <stdint.h>
#include "software_cfu.h"

//
// In this function, place C code to emulate your CFU. You can switch between
// hardware and emulated CFU by setting the CFU_SOFTWARE_DEFINED DEFINE in
// the Makefile.
uint32_t software_cfu(int funct3, int funct7, uint32_t rs1, uint32_t rs2)
{
    static uint32_t mem[256] = {0};  // Simple memory emulation (256 entries)
    uint32_t retval = 0;
    static uint32_t mac_accumulator = 0;  // MAC accumulator

    // Use funct3 as the control signal for operation selection
    if (funct3 & 0x2) {
        // Processing Disabled -> Memory operation
        if (funct3 & 0x1) {
            // Memory Write (equivalent to w_en = 1)
            mem[rs1 & 0xFF] = rs1;  // Store rs1 in memory at address (rs1 & 0xFF)
        } else {
            // Memory Read (equivalent to w_en = 0)
            retval = mem[rs1 & 0xFF];  // Read from memory at address (rs1 & 0xFF)
        }
    } else {
        // Processing Enabled -> MAC operation (equivalent to p_en = 1)
        mac_accumulator += rs1;  // Accumulate rs1 values
        retval = mac_accumulator;
    }

    return retval;
}