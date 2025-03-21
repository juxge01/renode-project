# Verilated -*- CMake -*-
# DESCRIPTION: Verilator output: CMake include script with class lists
#
# This CMake script lists generated Verilated files, for including in higher level CMake scripts.
# This file is meant to be consumed by the verilate() function,
# which becomes available after executing `find_package(verilator).

### Constants...
set(PERL "perl" CACHE FILEPATH "Perl executable (from $PERL)")
set(VERILATOR_ROOT "/usr/share/verilator" CACHE PATH "Path to Verilator kit (from $VERILATOR_ROOT)")

### Compiler flags...
# User CFLAGS (from -CFLAGS on Verilator command line)
set(Vpim_model_USER_CFLAGS )
# User LDLIBS (from -LDFLAGS on Verilator command line)
set(Vpim_model_USER_LDLIBS )

### Switches...
# SystemC output mode?  0/1 (from --sc)
set(Vpim_model_SC 0)
# Coverage output mode?  0/1 (from --coverage)
set(Vpim_model_COVERAGE 0)
# Threaded output mode?  0/1/N threads (from --threads)
set(Vpim_model_THREADS 0)
# VCD Tracing output mode?  0/1 (from --trace)
set(Vpim_model_TRACE_VCD 0)
# FST Tracing output mode? 0/1 (from --fst-trace)
set(Vpim_model_TRACE_FST 0)

### Sources...
# Global classes, need linked once per executable
set(Vpim_model_GLOBAL "${VERILATOR_ROOT}/include/verilated.cpp")
# Generated module classes, non-fast-path, compile with low/medium optimization
set(Vpim_model_CLASSES_SLOW "/home/jueun/park/renode/baremetal-riscv-renode/renode-verilator-integration/samples/cfu_test/build_test/CMakeFiles/Vtop.dir/Vpim_model.dir/Vpim_model__Slow.cpp")
# Generated module classes, fast-path, compile with highest optimization
set(Vpim_model_CLASSES_FAST "/home/jueun/park/renode/baremetal-riscv-renode/renode-verilator-integration/samples/cfu_test/build_test/CMakeFiles/Vtop.dir/Vpim_model.dir/Vpim_model.cpp")
# Generated support classes, non-fast-path, compile with low/medium optimization
set(Vpim_model_SUPPORT_SLOW "/home/jueun/park/renode/baremetal-riscv-renode/renode-verilator-integration/samples/cfu_test/build_test/CMakeFiles/Vtop.dir/Vpim_model.dir/Vpim_model__Syms.cpp")
# Generated support classes, fast-path, compile with highest optimization
set(Vpim_model_SUPPORT_FAST )
# All dependencies
set(Vpim_model_DEPS "/usr/bin/verilator_bin" "pim_model.v")
# User .cpp files (from .cpp's on Verilator command line)
set(Vpim_model_USER_CLASSES )
