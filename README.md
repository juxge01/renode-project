# Integrate systolic array - Renode

## Running libVtop.so
```bash
mkdir build && cd build
SRC_PATH=$(realpath ..)
cmake -DCMAKE_BUILD_TYPE=Release        -DUSER_RENODE_DIR=$RENODE_PH        ${VERILATOR_PATH:+"-DUSER_VERILATOR_DIR=$VERILATOR_PATH"}       "$SRC_PATH"     -DLIBOPENLIBM=/home/jueun/park/renode/baremetal-riscv-renode/renode-verilator-integration/lib/libopenlibm-Linux-x86_64.a
```

## Running Springbok
```bash

```
