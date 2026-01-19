import random
import os

import cocotb
from cocotb.triggers import Timer


"""
DIVIDER TEST SECTION
"""

def setup_unsigned_division(dut):
    dut.sign.value = 0
    dut.mix.value = 0 
    dut.mult_or_div.value = 1

def setup_signed_division(dut):
    dut.sign.value = 1
    dut.mix.value = 0 
    dut.mult_or_div.value = 1

def setup_mulhu(dut):
    dut.sign.value = 0
    dut.mix.value = 0 
    dut.mult_or_div.value = 0

def setup_mulh(dut):
    dut.sign.value = 1
    dut.mix.value = 0 
    dut.mult_or_div.value = 0

def setup_mulhsu(dut):
    dut.sign.value = 0
    dut.mix.value = 1
    dut.mult_or_div.value = 0

"""
UNSIGNED DIVISION
"""


@cocotb.test()
async def divider_2dividedby2_test(dut):
    """Test for 2 / 2 = 1."""

    A = 2
    B = 2
    
    dut.a.value = A
    dut.b.value = B
    setup_unsigned_division(dut)

    await Timer(2, unit="ns")


    assert dut.uh.value == 1, (
        f"Div result is incorrect: A={dut.a.value}, B={dut.b.value} {dut.uh.value} != 1"
    )



"""
SIGNED DIVISION
"""

@cocotb.test()
async def divided_by_1_test(dut):
    """Dividing by one."""

    A = random.randint(1, 2**(5));
    B = 1
    dut.a.value = A
    dut.b.value = B
    setup_signed_division(dut)

    await Timer(2, unit="ns")

    assert dut.uh.value == A, (
        f"Critical Error: ANYTHING DIVIDED BY MINUS ONE IS NOT ITSELF! A={dut.a.value}, B={dut.b.value} {dut.uh.value} != {A}"
    )

@cocotb.test()
async def divided_by_minus1_test(dut):
    """Dividing by one."""

    A = random.randint(1, 2**(5));
    B = -1

    dut.a.value = A
    dut.b.value = B
    setup_signed_division(dut)

    await Timer(2, unit="ns")

    assert dut.uh.value == -A, (
        f"Critical Error: ANYTHING DIVIDED BY MINUS ONE IS NOT ITSELF! A={dut.a.value}, B={dut.b.value} {dut.uh.value} != {A}"
    )


@cocotb.test()
async def divider_5dividedby10_test(dut):
    """Test for 5 / 10"""

    A = 5
    B = 10

    dut.a.value = A
    dut.b.value = B
    setup_signed_division(dut)
    
    await Timer(2, unit="ns")

    assert dut.lh.value == 5, (
        f"Div result is incorrect: Bad lhainder. A={dut.a.value}, B={dut.b.value} {dut.lh.value} != {5}"
    )
    assert dut.uh.value == 0, (
        f"Div result is incorrect: Bad uhuotient. A={dut.a.value}, B={dut.b.value} {dut.uh.value} != {0}"
    )

"""
MULT section
"""

# simple integration test
@cocotb.test()
async def anything_times0_test(dut):
    """Multiplying by zero..."""

    A = random.randint(0, 2**(32));
    B = 0

    dut.a.value = A
    dut.b.value = B
    setup_mulh(dut)
    
    await Timer(2, unit="ns")


    assert dut.lh.value == 0, (
        f"Critical Error: ANYTHING TIMES ZERO IS NOT ZERO! A={dut.a.value}, B={dut.b.value} {dut.lh.value} != 0"
    )



## divide
##@cocotb.test()
##async def mult_random_unsigned_numbers(dut):
##    """Multiplying two random integers."""
##
##    A = random.randint(0, 2**(32));
##    B = random.randint(0, 2**(32));
##
##    dut.a.value = A
##    dut.b.value = B
##
##    await Timer(2, unit="ns")
##
##
##    assert dut.y.value == A*B, (
##        f"Error: Big number multiplication failed! A={dut.a.value}, B={dut.b.value} {dut.y.value} != A*B"
##    )
