# Makefile

# defaults
# icarus
SIM ?= icarus
TOPLEVEL_LANG ?= verilog

VERILOG_SOURCES += $(PWD)/F_mult.sv
VERILOG_SOURCES += ./F_isNaN.sv
#VERILOG_SOURCES += ../divider/divider_block.sv
#VERILOG_SOURCES += ../divider/divider_32.sv
VERILOG_SOURCES += ../multiplier/fulladder_and.sv
VERILOG_SOURCES += ../multiplier/unsigned/multiplier.sv
VERILOG_SOURCES += ../adder/hdl/sklansky_adder.sv

# use VHDL_SOURCES for VHDL files

# COCOTB_TOPLEVEL is the name of the toplevel module in your Verilog or VHDL file
COCOTB_TOPLEVEL = F_mult

# COCOTB_TEST_MODULES is the basename of the Python test file(s)
COCOTB_TEST_MODULES = test_mult

# include cocotb's make rules to take care of the simulator setup
#make test:
include $(shell cocotb-config --makefiles)/Makefile.sim

# lint verilator
#make lint:
#	verilator  --lint-only F_mult.sv  -I ../adder/hdl/sklansky_adder.sv -I ../multiplier/unsigned/multiplier.sv -I ../multiplier/fulladder_and.sv 
