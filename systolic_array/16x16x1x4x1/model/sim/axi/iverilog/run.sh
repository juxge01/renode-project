#!/bin/bash
OUTPUT=ws_sta_16x16x1x4x1_axi
# TOP_MODULE=tb_ws_sta_16x16x1x4x1

# iverilog -o $OUTPUT -g2012 -s $TOP_MODULE -f run.f
iverilog -o $OUTPUT -g2012 -f run.f

vvp $OUTPUT | tee -i sa16.log

# gtkwave $OUTPUT.vcd
