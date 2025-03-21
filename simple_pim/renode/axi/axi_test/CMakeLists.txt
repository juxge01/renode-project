#
# REPLACE ALL UNCOMMENTED <...> PLACEHOLDERS
#
cmake_minimum_required(VERSION 3.8)

# Name of the project
project(verilated_ex)

# Verilog files to be verilated
set(VTOP axi_pim.v)

# C/C++ source files to be compiled
set(CSOURCES sim_main.cpp)

# Add Verilator flags to ignore specific warnings
set(VERILATOR_ARGS --Wno-WIDTH --Wno-CASEINCOMPLETE)

set(COMP_EXEC_ARGS -DINVERT_RESET)
set(COMP_LIB_ARGS -fPIC -DINVERT_RESET)
set(CMAKE_EXE_LINKER_FLAGS ${CMAKE_EXE_LINKER_FLAGS})

# CMake file doing the hard job
include(../../cmake/configure-and-verilate.cmake)
