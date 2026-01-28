import random
import os
#import sys
#from pathlib import Path

import cocotb
from cocotb.triggers import Timer
#from cocotb_tools.runner import get_runner

#if cocotb.simulator.is_running():
#    from adder_model import adder_model

@cocotb.test()
async def adder_basic_test(dut):
    """Test for 5 + 10"""

    A = 5
    B = 10

    dut.a.value = A
    dut.b.value = B
    dut.cin.value = 0

    await Timer(2, unit="ns")


    assert dut.y.value == A+B, (
        f"Adder result is incorrect: A={dut.a.value}, B={dut.b.value} {dut.y.value} != {A+B}"
    ) 

@cocotb.test()
async def adder_minusone_one(dut):
    """Test for -1  + 1. No cout."""

    A = -1
    B = 1

    dut.a.value = A
    dut.b.value = B
    dut.cin.value = 0

    await Timer(2, unit="ns")


    assert dut.y.value == 0, (
        f"Adder result is incorrect: {dut.y.value} != {A+B}"
    ) 

    assert dut.cout.value == 0, (
        f"Cout is wrong: {dut.cout.value}"   
    )


@cocotb.test()
async def adder_ten_ten(dut):
    """Test for 10 + 10"""

    A = 10
    B = 10

    dut.a.value = A
    dut.b.value = B
    dut.cin.value = 0

    await Timer(2, unit="ns")


    assert dut.y.value == A+B, (
        f"Adder result is incorrect: {dut.y.value} != {A+B}"
    ) 


@cocotb.test()
async def adder_add_one(dut):
    """Test for 1 + 1"""

    A = 1
    B = 1
    Cin = 0

    dut.a.value = A
    dut.b.value = B
    dut.cin.value = Cin

    await Timer(2, unit="ns")


    assert dut.y.value == A+B+Cin, (
        f"Adder result is incorrect: {dut.y.value} != {A+B}"
    ) 


@cocotb.test()
async def adder_generate(dut):
    """Test for propagate"""

    A = 0
    B = 0
    Cin = 1

    dut.a.value = A
    dut.b.value = B
    dut.cin.value = Cin

    await Timer(2, unit="ns")


    assert dut.y.value == A+B+Cin, (
        f"Cin behavior is incorrect: {dut.y.value} != {A+B+Cin}"
    ) 


@cocotb.test()
async def adder_randomised_test(dut):
    """Test for adding 2 random numbers multiple times"""

    for _ in range(1000):
        A   = random.randint(0, 2**(32)-1)
        B   = random.randint(0, 2**(32)-1)
        Cin = random.randint(0,1)

        dut.a.value = A
        dut.b.value = B
        dut.cin.value = Cin
 

        await Timer(2, unit="ns")

        assert dut.y.value == adder_model(A, B, Cin, 32), (
            f"Randomised test failed with: {dut.a.value} + {dut.b.value} + {dut.cin.value}= {dut.y.value}"
        )



@cocotb.test()
async def adder_randomized_overflow(dut):
    """Test the entire two's complement range."""
    for _ in range(10):
        A   = random.randint(-2**(31), 2**(31)-1)
        B   = random.randint(-2**(31), 2**(31)-1)
        Cin = random.randint(0,1)
        dut.a.value = A
        dut.b.value = B
        dut.cin.value = Cin

        await Timer(2, unit="ns")


        assert dut.y.value == adder_model(A, B, Cin, 32), (
        f"Adder behavior is incorrect: {dut.y.value} != {A+B+Cin}"
        )


def adder_model(a: int, b: int, cin: int, xlen: int) -> int:
    """Model of a RISC-V adder."""
    res = a + b + cin;
    mask  = (1 << xlen) -1;
    return res & mask;
