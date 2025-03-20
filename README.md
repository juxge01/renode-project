## Integrate systolic array - Renode

#### Running Simulation
Run in `model/sim/axi/iverilog`
```bash
$ ./run.sh
```
If you want to clean the simulation files,
```bash
$ ./clean.sh
```
If you want to see the timing diagram, 
```bash
$ gtkwave *.vcd
```

#### Running libVtop.so
```bash
$ mkdir build && cd build
$ SRC_PATH=$(realpath ..)
$ cmake -DCMAKE_BUILD_TYPE=Release \
            -DUSER_RENODE_DIR=$RENODE_PH  \
            ${VERILATOR_PATH:+"-DUSER_VERILATOR_DIR=$VERILATOR_PATH"}  \
            "$SRC_PATH"  \
            -DLIBOPENLIBM=/home/jueun/park/renode/baremetal-riscv-renode/renode-verilator-integration/lib/libopenlibm-Linux-x86_64.a
```

#### Running Renode
Run in 
```bash
$ mkdir 
```

#### Running Springbok
```bash

```
