//
// Copyright (c) 2021 Antmicro
//
//  This file is licensed under the MIT License.
//  Full license text is available in 'LICENSE' file.
//

#include <verilated.h>
#include "Vpim_model.h"
#include <bitset>
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <cstdlib>
#if VM_TRACE
# include <verilated_vcd_c.h>
#endif
#include "src/renode_cfu.h"
#include "src/buses/cfu.h"

// Forward declarations
extern "C" {
    void HandleMainMessage();
    void Receive();
}

RenodeAgent *cfu;
Vpim_model *top = new Vpim_model;
VerilatedVcdC *tfp;
vluint64_t main_time = 0;
FILE *log_file = nullptr;

void toggle_clock()
{
    top->clk = !top->clk;
    top->eval();
#if VM_TRACE
    if (tfp) {
        tfp->dump(main_time);
        tfp->flush();
    }
#endif
    main_time += 5; // Toggle every 5 time units
}

void eval()
{
#if VM_TRACE
    main_time++;
    tfp->dump(main_time);
    tfp->flush();
#endif
    top->eval();
}

RenodeAgent *Init() {
    Cfu* bus = new Cfu();

    //=================================================
    // Init CFU signals
    //=================================================
    bus->req_valid = &top->cmd_valid;
    bus->req_ready = &top->cmd_ready;

    bus->req_func_id = (uint16_t *)&top->addr;
    bus->req_data0 = (uint32_t *)&top->d;
    bus->resp_valid = &top->rsp_valid;
    bus->resp_ready = &top->rsp_ready;
    bus->resp_ok = &top->rsp_payload_response_ok;
    bus->resp_data = (uint32_t *)&top->mac_out;
    bus->rst = &top->reset;
    bus->clk = &top->clk;

    //=================================================
    // Init eval function
    //=================================================
    bus->evaluateModel = &eval;

    //=================================================
    // Init peripheral
    //=================================================
    cfu = new RenodeAgent(bus);

#if VM_TRACE
    Verilated::traceEverOn(true);
    tfp = new VerilatedVcdC;
    top->trace(tfp, 99);
    tfp->open("simx.vcd");
#endif

    return cfu;
}

void reset_design()
{
    top->reset = 1;
    eval();
    for (int i = 0; i < 2; ++i) {
        toggle_clock();
        eval();
    }
    top->reset = 0;
}

void apply_stimulus()
{
    // Initialize signals
    top->clk = 0;
    top->reset = 1;
    top->d = 0;
    top->addr = 0;
    for (int i = 0; i < 4; ++i) {
        top->rwl[i] = 0;
    }
    top->w_en = 0;
    top->p_en = 0;
    top->cmd_valid = 0;
    top->rsp_ready = 0;

    fprintf(log_file, "Starting simulation ...\n");

    // Reset the design
    reset_design();

    int write_addrs[256] = {0};
    int write_index = 0;
    bool found = false;

    for (int i = 0; i < 256; i++) {
        toggle_clock();
        eval();

        top->d = rand();
        top->addr = rand() % 256;
        top->w_en = rand() % 2;
        top->p_en = rand() % 2;

        // Set rwl to a random 256-bit value
        for (int j = 0; j < 4; ++j) {
            top->rwl[j] = static_cast<uint64_t>(rand());
        }

        top->cmd_valid = 1;
        top->rsp_ready = 1;
        eval();
        toggle_clock();
        eval();

        if (!top->w_en && !top->p_en) {
            // fprintf(log_file, "Read !!\n");
            found = false;
            for (int j = 0; j < write_index; j++) {
                if (write_addrs[j] == top->addr) {
                    found = true;
                    fprintf(log_file, "Read -> existing address %x\n", top->addr);
                }
            }
            if (!found) {
                fprintf(log_file, "Read -> No data at address %x\n", top->addr);
            }
            fprintf(log_file, "mem[%x] -> %x\n", top->addr, top->q);
        } else if (top->w_en && !top->p_en) {
            // fprintf(log_file, "Write !!\n");
            write_addrs[write_index++] = top->addr;
            fprintf(log_file, "Write -> mem[%x] <- %x\n", top->addr, top->d);
        } else {
            fprintf(log_file, "MAC_OUT -> Processing value %x\n", top->mac_out);
        }
        fprintf(log_file, "=============================\n");

        top->cmd_valid = 0;
        top->rsp_ready = 0;
        eval();
        toggle_clock();
        eval();
    }

    fprintf(log_file, "Simulation finished.\n");
    Verilated::gotFinish(true);
}

int main(int argc, char **argv)
{
    Verilated::commandArgs(argc, argv);

    const char* log_file_path = "simulation_log.txt";
    log_file = fopen(log_file_path, "w");
    if (!log_file) {
        fprintf(stderr, "Unable to open log file for writing: %s\n", log_file_path);
        return -1;
    }

    fprintf(stderr, "Log file opened successfully: %s\n", log_file_path);

    RenodeAgent *agent = Init();

    apply_stimulus();

    while (!Verilated::gotFinish())
    {
        toggle_clock();
    }

    fclose(log_file);
    delete agent;
    delete top;
#if VM_TRACE
    tfp->close();
#endif
    return 0;
}
