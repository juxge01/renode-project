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
set(Vaxi_pim_USER_CFLAGS )
# User LDLIBS (from -LDFLAGS on Verilator command line)
set(Vaxi_pim_USER_LDLIBS )

### Switches...
# SystemC output mode?  0/1 (from --sc)
set(Vaxi_pim_SC 0)
# Coverage output mode?  0/1 (from --coverage)
set(Vaxi_pim_COVERAGE 0)
# Threaded output mode?  0/1/N threads (from --threads)
set(Vaxi_pim_THREADS 0)
# VCD Tracing output mode?  0/1 (from --trace)
set(Vaxi_pim_TRACE_VCD 0)
# FST Tracing output mode? 0/1 (from --trace-fst)
set(Vaxi_pim_TRACE_FST 0)

### Sources...
# Global classes, need linked once per executable
set(Vaxi_pim_GLOBAL "${VERILATOR_ROOT}/include/verilated.cpp")
# Generated module classes, non-fast-path, compile with low/medium optimization
set(Vaxi_pim_CLASSES_SLOW "/home/jueun/park/renode/renode-verilator-integration-master/samples/pim/build/CMakeFiles/Vtop.dir/Vaxi_pim.dir/Vaxi_pim___024root__Slow.cpp" "/home/jueun/park/renode/renode-verilator-integration-master/samples/pim/build/CMakeFiles/Vtop.dir/Vaxi_pim.dir/Vaxi_pim___024root__DepSet_h2ed833b8__0__Slow.cpp")
# Generated module classes, fast-path, compile with highest optimization
set(Vaxi_pim_CLASSES_FAST "/home/jueun/park/renode/renode-verilator-integration-master/samples/pim/build/CMakeFiles/Vtop.dir/Vaxi_pim.dir/Vaxi_pim.cpp" "/home/jueun/park/renode/renode-verilator-integration-master/samples/pim/build/CMakeFiles/Vtop.dir/Vaxi_pim.dir/Vaxi_pim___024root__DepSet_h2ed833b8__0.cpp")
# Generated support classes, non-fast-path, compile with low/medium optimization
set(Vaxi_pim_SUPPORT_SLOW "/home/jueun/park/renode/renode-verilator-integration-master/samples/pim/build/CMakeFiles/Vtop.dir/Vaxi_pim.dir/Vaxi_pim__Syms.cpp")
# Generated support classes, fast-path, compile with highest optimization
set(Vaxi_pim_SUPPORT_FAST )
# All dependencies
set(Vaxi_pim_DEPS "/home/jueun/park/build/verilator_428/bin/verilator_bin" "axi_pim.v")
# User .cpp files (from .cpp's on Verilator command line)
set(Vaxi_pim_USER_CLASSES )
