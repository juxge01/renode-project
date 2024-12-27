#
# REPLACE ALL UNCOMMENTED <...> PLACEHOLDERS
#
cmake_minimum_required(VERSION 3.8)

# Name of the project
project(axi_sa_32x32)

# Verilog files to be verilated
# set(VTOP axi_pim.v)
set(VTOP 	./src/axi_sa_32x32.v                        	  
			./src/pre_processor_a.sv
			./src/pre_processor_b.sv
			./src/multiplier.sv
			./src/processing_element.sv
			./src/processing_element_31.sv
			./src/processing_element_32.sv
			./src/processing_element_63.sv
			./src/processing_element_64.sv
			./src/processing_element_95.sv
			./src/processing_element_128.sv
			./src/processing_element_159.sv
			./src/processing_element_256.sv
			./src/processing_element_287.sv
			./src/processing_element_512.sv
			./src/processing_element_543.sv
			./src/processing_element_992.sv
			./src/processing_element_1023.sv
			./src/systolic_tensor_array.sv
			./src/post_processor.sv
			./src/dimension_aligned_ws_sta_32x32x1x1x1.sv
)

# C/C++ source files to be compiled
set(CSOURCES sim_main.cpp)

# Add Verilator flags to ignore specific warnings
set(VERILATOR_ARGS --Wno-WIDTH --Wno-CASEINCOMPLETE)

set(COMP_EXEC_ARGS -DINVERT_RESET)
set(COMP_LIB_ARGS -fPIC -DINVERT_RESET)
set(CMAKE_EXE_LINKER_FLAGS ${CMAKE_EXE_LINKER_FLAGS})

# CMake file doing the hard job
# include(../../cmake/build-cosimulation.cmake)
include(../../cmake/configure-and-verilate.cmake)
