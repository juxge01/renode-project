#!/bin/bash
OUTPUT=dimension_aligned_ws_sta_16x16x1x4x1_axi
# TOP_MODULE=tb_dimension_aligned_ws_sta_16x16x1x4x1

# iverilog -o $OUTPUT -g2012 -s $TOP_MODULE -f run.f
iverilog -o $OUTPUT -g2012 -f run.f

vvp $OUTPUT

gtkwave $OUTPUT.vcd
