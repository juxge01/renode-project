# renode-integration-project

Copyright (c) 2023 [Antmicro](https://www.antmicro.com)

This project was created by referencing Antmicro's Renode and Google's CFU-Playground.

> **Note**
> The Renode directory needs to have the `build.sh` file modified in order to create custom instructions
```sh
$  ./build.sh
```

### PIM-CFU integration 
* **CFU** (Custom Function Unit)
* **Tightly coupled approach**: tightly coupled into the pipeline of a CPU core, to add new custom function instructions that complement the CPU’s standard functions (such as arithmetic/logic operations).

### PIM-AXI integration
* **AXI** (Advanced eXtensible Interface) bus connection method
* This is an interface for high-speed data transmission using AXI.


  
