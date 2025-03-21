CC = iverilog
FLAGS = -Wall -Winfloop
TOP_MODEL=test

default: ../../src/axi_pim.v ../../src/testbench.v
	$(CC) $(FLAGS) -o ${TOP_MODEL}.out ../../src/axi_pim.v ../../src/testbench.v
	vvp ${TOP_MODEL}.out | tee -i log/${TOP_MODEL}.log
	gtkwave ${TOP_MODEL}.vcd

clean: 
	rm -rf ${TOP_MODEL}.*
	rm -rf ./log/${TOP_MODEL}.*
