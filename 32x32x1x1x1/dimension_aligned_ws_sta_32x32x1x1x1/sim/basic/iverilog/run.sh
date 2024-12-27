#!/bin/bash
OUTPUT=dimension_aligned_ws_sta_32x32x1x1x1
# TOP_MODULE=tb_dimension_aligned_ws_sta_32x32x1x1x1

# iverilog -o $OUTPUT -g2012 -s $TOP_MODULE -f run.f
iverilog -o $OUTPUT -g2012 -f run.f

vvp $OUTPUT

gtkwave $OUTPUT.vcd
