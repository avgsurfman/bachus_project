import random
import os

import cocotb
from cocotb.triggers import Timer



@cocotb.test()
async def multiplier_2times2_test(dut):
    """Test for 2 * 2 = 4."""

    A = 2
    B = 2

    dut.a.value = A
    dut.b.value = B

    await Timer(2, unit="ns")


    assert dut.y.value == 4, (
        f"Mult result is incorrect: A={dut.a.value}, B={dut.b.value} {dut.y.value} != 4"
    )


@cocotb.test()
async def multiplier_5times10_test(dut):
    """Test for 5 + 10"""

    A = 5
    B = 10

    dut.a.value = A
    dut.b.value = B

    await Timer(2, unit="ns")


    assert dut.y.value == A*B, (
        f"Adder result is incorrect: A={dut.a.value}, B={dut.b.value} {dut.y.value} != {A*B}"
    )


@cocotb.test()
async def anything_times0_test(dut):
    """Multiplying by zero..."""

    A = random.randint(0, 2**(32));
    B = 0

    dut.a.value = A
    dut.b.value = B

    await Timer(2, unit="ns")


    assert dut.y.value == 0, (
        f"Critical Error: ANYTHING TIMES ZERO IS NOT ZERO! A={dut.a.value}, B={dut.b.value} {dut.y.value} != 0"
    )




@cocotb.test()
async def anything_times1_test(dut):
    """Multiplying by one."""

    A = random.randint(1, 2**(5));
    B = 1

    dut.a.value = A
    dut.b.value = B

    await Timer(2, unit="ns")


    assert dut.y.value == A, (
        f"Critical Error: ANYTHING TIMES ONE IS NOT ITSELF! A={dut.a.value}, B={dut.b.value} {dut.y.value} != A"
    )


@cocotb.test()
async def mult_random_unsigned_numbers(dut):
    """Multiplying two random integers."""

    A = random.randint(0, 2**(32));
    B = random.randint(0, 2**(32));

    dut.a.value = A
    dut.b.value = B

    await Timer(2, unit="ns")


    assert dut.y.value == A*B, (
        f"Error: Big number multiplication failed! A={dut.a.value}, B={dut.b.value} {dut.y.value} != A*B"
    )
