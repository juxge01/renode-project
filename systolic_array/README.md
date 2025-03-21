## Integrate systolic array - Renode

> Using `renode-dpi-examples`, `renode-verilator-integration`, `iree-rv32-springbok-legacy`

#### Running Simulation
Run in `model/sim/axi/iverilog/`
```bash
./run.sh
```
If you want to clean the simulation files,
```bash
./clean.sh
```
If you want to see the timing diagram, 
```bash
gtkwave *.vcd
```


#### Running libVtop.so
Run in `renode/axi_sa_*/` -> `renode-verilator-integration/samples/`
```bash
mkdir build && cd build
SRC_PATH=$(realpath ..)
cmake -DCMAKE_BUILD_TYPE=Release \
            -DUSER_RENODE_DIR=$RENODE_PH  \
            ${VERILATOR_PATH:+"-DUSER_VERILATOR_DIR=$VERILATOR_PATH"}  \
            "$SRC_PATH"  \
            -DLIBOPENLIBM=/home/jueun/park/renode/baremetal-riscv-renode/renode-verilator-integration/lib/libopenlibm-Linux-x86_64.a
```


#### Running Renode 
Run in `renode/` -> `renode-dpi-examples/samples/`
```bash
${RENODE_PATH}/renode platform_basic.resc
```

#### Running Springbok
If you revise the `samples/util/util.c`, -> in `iree-rv32-springbok-legacy/`
```bash
./build_riscv.sh
```

After that,
```bash
./sim_springbok_*.sh $ELF_PATH
```


#### Additional prerequisites
Once you have Python3 and `pip`, install additional modules:
```bash
python3 -m pip install -r requirements.txt
```


