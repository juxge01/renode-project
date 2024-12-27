#
# REPLACE ALL UNCOMMENTED <...> PLACEHOLDERS
#
cmake_minimum_required(VERSION 3.8)

# Name of the project
project(axi_sa_16x16)

# Verilog files to be verilated
# set(VTOP axi_pim.v)
set(VTOP ./src/axi_sa_16x16.v                        	  
		 ./src/group_processing_element_16.sv   
		 ./src/group_processing_element_47.sv  
		 ./src/post_processor.sv          
		 ./src/processing_element_512.sv
		 ./src/dimension_aligned_ws_sta_16x16x1x4x1.sv  
		 ./src/group_processing_element_240.sv  
		 ./src/group_processing_element_64.sv  
		 ./src/pre_processor_a.sv         
		 ./src/processing_element_64.sv
		 ./src/group_processing_element_128.sv          
		 ./src/group_processing_element_255.sv  
		 ./src/group_processing_element_79.sv  
		 ./src/pre_processor_b.sv         
		 ./src/processing_element_960.sv
		 ./src/group_processing_element_143.sv          
		 ./src/group_processing_element_31.sv   
		 ./src/group_processing_element.sv     
		 ./src/processing_element_128.sv  
		 ./src/processing_element.sv
		 ./src/group_processing_element_15.sv           
		 ./src/group_processing_element_32.sv   
		 ./src/multiplier.sv                   
		 ./src/processing_element_256.sv  
		 ./src/systolic_tensor_array.sv)

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
