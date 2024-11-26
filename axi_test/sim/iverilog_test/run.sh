TOP_MODEL=test

iverilog -o $TOP_MODEL ../src/*.v
vvp $TOP_MODEL | tee -i log/$TOP_MODEL.log
