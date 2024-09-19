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
#include <cstdio>

#include <inttypes.h>  // uint32_t를 출력하기 위한 매크로

uint32_t software_cfu(int funct3, int funct7, uint32_t rs1, uint32_t rs2) {
   // static uint32_t mem[256] = {0};  // Verilog의 mem 배열과 대응되는 메모리
    uint32_t shift_cnt = 0;    // Verilog의 shift_cnt와 대응

    uint32_t retval = 0;

   // uint32_t mem_addr = ((funct7 & 0x7F) << 1) | ((funct3 >> 2) & 0x01);

    if ((funct3 & 0x2) || (funct3 & 0x3)) {  // MAC operation: Verilog에서 MAC 연산과 대응
	uint32_t sum_d = 0;
    	uint32_t mac_out = 0;

    	for (int i = 0; i < 32; i++) {
        	sum_d += rs1;
    	}

    	uint32_t scaling_factor = (1 << (shift_cnt + 1)) - 1;

    	mac_out = sum_d * scaling_factor;

        printf("MAC operation result: %08" PRIx32 "\n", mac_out);
    }
    else {
	    printf("Read, Write mode\n");
   }

    return retval;
}
