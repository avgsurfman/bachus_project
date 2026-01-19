# Makefile

# defaults
# icarus
SIM ?= icarus
TOPLEVEL_LANG ?= verilog

VERILOG_SOURCES += $(PWD)/M_ext_32.sv
VERILOG_SOURCES += ../divider/divider_block.sv
VERILOG_SOURCES += ../divider/divider_32.sv
VERILOG_SOURCES += ../multiplier/fulladder_and.sv
VERILOG_SOURCES += ../multiplier/signed_unsigned/fulladder_xor.sv
VERILOG_SOURCES += ../multiplier/signed_unsigned/multiplier.sv
VERILOG_SOURCES += ../adder/hdl/sklansky_adder.sv

# use VHDL_SOURCES for VHDL files

# COCOTB_TOPLEVEL is the name of the toplevel module in your Verilog or VHDL file
COCOTB_TOPLEVEL = M_ext_32

# COCOTB_TEST_MODULES is the basename of the Python test file(s)
COCOTB_TEST_MODULES = test

# include cocotb's make rules to take care of the simulator setup
include $(shell cocotb-config --makefiles)/Makefile.sim
