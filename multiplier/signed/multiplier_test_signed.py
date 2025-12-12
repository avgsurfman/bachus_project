import random
import os
import traceback

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
    """Test for 5 * 10"""

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

    A = random.randint(0, 2**(31));
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

    A = random.randint(-2**(5), 2**(5));
    B = 1

    dut.a.value = A
    dut.b.value = B

    await Timer(2, unit="ns")

    assert dut.y.value == A, (
           f"Critical Error: ANYTHING TIMES ONE IS NOT ITSELF! A={dut.a.value}, B={dut.b.value} {dut.y.value} != A"
    )

@cocotb.test()
async def minusone_timesminus1_test(dut):
    """Multiplying by minus one."""

    A = -1
    B = -1

    dut.a.value = A
    dut.b.value = B

    await Timer(2, unit="ns")

    assert dut.y.value == 1, (
           f"Error: Result should be positive! A={dut.a.value}, B={dut.b.value} {dut.y.value} != 1"
    )

@cocotb.test()
async def mult_random_signed_numbers(dut):
    """multiplies two random signed integers."""
    """ this test would always fail because by default cocotb does assume that numbers are unsigned.""" 
    """ therefore, no conversion is done."""
    a = random.randint(-2**(31), 2**(31));
    b = random.randint(-2**(31), 2**(31));

    dut.a.value = a
    dut.b.value = b
    res = dut.y.value;
    res = res.to_signed();
    traceback.print_tb();
    #res = dut.y.value.to_signed()
    #res = dut.y.value.signed_integer
    await Timer(2, unit="ns")


    assert res  == a*b, (
        f"error: big number multiplication failed! a={dut.a.value}, b={dut.b.value} {dut.y.value} != a*b"
    )
