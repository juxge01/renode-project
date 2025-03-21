# Verilated -*- CMake -*-
# DESCRIPTION: Verilator output: CMake include script with class lists
#
# This CMake script lists generated Verilated files, for including in higher level CMake scripts.
# This file is meant to be consumed by the verilate() function,
# which becomes available after executing `find_package(verilator).

### Constants...
set(PERL "perl" CACHE FILEPATH "Perl executable (from $PERL)")
set(VERILATOR_ROOT "/home/jueun/park/build/verilator_428/share/verilator" CACHE PATH "Path to Verilator kit (from $VERILATOR_ROOT)")

### Compiler flags...
# User CFLAGS (from -CFLAGS on Verilator command line)
set(Vaxi_sa_32x32_USER_CFLAGS )
# User LDLIBS (from -LDFLAGS on Verilator command line)
set(Vaxi_sa_32x32_USER_LDLIBS )

### Switches...
# SystemC output mode?  0/1 (from --sc)
set(Vaxi_sa_32x32_SC 0)
# Coverage output mode?  0/1 (from --coverage)
set(Vaxi_sa_32x32_COVERAGE 0)
# Threaded output mode?  0/1/N threads (from --threads)
set(Vaxi_sa_32x32_THREADS 0)
# VCD Tracing output mode?  0/1 (from --trace)
set(Vaxi_sa_32x32_TRACE_VCD 0)
# FST Tracing output mode? 0/1 (from --trace-fst)
set(Vaxi_sa_32x32_TRACE_FST 0)

### Sources...
# Global classes, need linked once per executable
set(Vaxi_sa_32x32_GLOBAL "${VERILATOR_ROOT}/include/verilated.cpp")
# Generated module classes, non-fast-path, compile with low/medium optimization
set(Vaxi_sa_32x32_CLASSES_SLOW "/home/jueun/park/renode/baremetal-riscv-renode/renode-verilator-integration/samples/axi_sa_32x32/build/CMakeFiles/Vtop.dir/Vaxi_sa_32x32.dir/Vaxi_sa_32x32___024root__Slow.cpp" "/home/jueun/park/renode/baremetal-riscv-renode/renode-verilator-integration/samples/axi_sa_32x32/build/CMakeFiles/Vtop.dir/Vaxi_sa_32x32.dir/Vaxi_sa_32x32___024root__DepSet_hf2cd79bf__0__Slow.cpp")
# Generated module classes, fast-path, compile with highest optimization
set(Vaxi_sa_32x32_CLASSES_FAST "/home/jueun/park/renode/baremetal-riscv-renode/renode-verilator-integration/samples/axi_sa_32x32/build/CMakeFiles/Vtop.dir/Vaxi_sa_32x32.dir/Vaxi_sa_32x32.cpp" "/home/jueun/park/renode/baremetal-riscv-renode/renode-verilator-integration/samples/axi_sa_32x32/build/CMakeFiles/Vtop.dir/Vaxi_sa_32x32.dir/Vaxi_sa_32x32___024root__DepSet_hf2cd79bf__0.cpp" "/home/jueun/park/renode/baremetal-riscv-renode/renode-verilator-integration/samples/axi_sa_32x32/build/CMakeFiles/Vtop.dir/Vaxi_sa_32x32.dir/Vaxi_sa_32x32___024root__DepSet_hf2cd79bf__1.cpp" "/home/jueun/park/renode/baremetal-riscv-renode/renode-verilator-integration/samples/axi_sa_32x32/build/CMakeFiles/Vtop.dir/Vaxi_sa_32x32.dir/Vaxi_sa_32x32___024root__DepSet_hf2cd79bf__2.cpp" "/home/jueun/park/renode/baremetal-riscv-renode/renode-verilator-integration/samples/axi_sa_32x32/build/CMakeFiles/Vtop.dir/Vaxi_sa_32x32.dir/Vaxi_sa_32x32___024root__DepSet_hf2cd79bf__3.cpp")
# Generated support classes, non-fast-path, compile with low/medium optimization
set(Vaxi_sa_32x32_SUPPORT_SLOW "/home/jueun/park/renode/baremetal-riscv-renode/renode-verilator-integration/samples/axi_sa_32x32/build/CMakeFiles/Vtop.dir/Vaxi_sa_32x32.dir/Vaxi_sa_32x32__Syms.cpp")
# Generated support classes, fast-path, compile with highest optimization
set(Vaxi_sa_32x32_SUPPORT_FAST )
# All dependencies
set(Vaxi_sa_32x32_DEPS "/home/jueun/park/build/verilator_428/bin/verilator_bin" "src/axi_sa_32x32.v" "src/multiplier.sv" "src/post_processor.sv" "src/pre_processor_a.sv" "src/pre_processor_b.sv" "src/processing_element.sv" "src/processing_element_1023.sv" "src/processing_element_128.sv" "src/processing_element_159.sv" "src/processing_element_256.sv" "src/processing_element_287.sv" "src/processing_element_31.sv" "src/processing_element_32.sv" "src/processing_element_512.sv" "src/processing_element_543.sv" "src/processing_element_63.sv" "src/processing_element_64.sv" "src/processing_element_95.sv" "src/processing_element_992.sv" "src/systolic_tensor_array.sv" "src/ws_sta_32x32x1x1x1.sv")
# User .cpp files (from .cpp's on Verilator command line)
set(Vaxi_sa_32x32_USER_CLASSES )
