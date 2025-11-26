import random
import os

import cocotb
from cocotb.triggers import Timer

@cocotb.test()
async def divider_2dividedby2_test(dut):
    """Test for 2 / 2 = 1."""

    A = 2
    B = 2

    dut.a.value = A
    dut.b.value = B

    await Timer(2, unit="ns")


    assert dut.q.value == 1, (
        f"Div result is incorrect: A={dut.a.value}, B={dut.b.value} {dut.q.value} != 1"
    )


@cocotb.test()
async def divider_5dividedby10_test(dut):
    """Test for 5 / 10"""

    A = 5
    B = 10

    dut.a.value = A
    dut.b.value = B

    await Timer(2, unit="ns")

    assert dut.rem.value == 5, (
        f"Div result is incorrect: Bad remainder. A={dut.a.value}, B={dut.b.value} {dut.rem.value} != {5}"
    )
    assert dut.q.value == 0, (
        f"Div result is incorrect: Bad quotient. A={dut.a.value}, B={dut.b.value} {dut.q.value} != {0}"
    )


##@cocotb.test()
##async def anything_times0_test(dut):
##    """Multiplying by zero..."""
##
##    A = random.randint(0, 2**(32));
##    B = 0
##
##    dut.a.value = A
##    dut.b.value = B
##
##    await Timer(2, unit="ns")
##
##
##    assert dut.y.value == 0, (
##        f"Critical Error: ANYTHING TIMES ZERO IS NOT ZERO! A={dut.a.value}, B={dut.b.value} {dut.y.value} != 0"
##    )




@cocotb.test()
async def anything_dividedby1_test(dut):
    """Dividing by one."""

    A = random.randint(1, 2**(5));
    B = 1

    dut.a.value = A
    dut.b.value = B

    await Timer(2, unit="ns")


    assert dut.q.value == A, (
        f"Critical Error: ANYTHING DIVIDED BY ONE IS NOT ITSELF! A={dut.a.value}, B={dut.b.value} {dut.q.value} != {A}"
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
