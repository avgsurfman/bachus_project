import random

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
    """Test for 5 + 10"""

    A = -1
    B = 1

    dut.a.value = A
    dut.b.value = B
    dut.cin.value = 0

    await Timer(2, unit="ns")


    assert dut.y.value == 0, (
        f"Adder result is incorrect: {dut.y.value} != {A+B}"
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

    for _ in range(10):
        A   = random.randint(0, 15)
        B   = random.randint(0, 15)
        Cin = random.randint(0,1)

        dut.a.value = A
        dut.b.value = B
        dut.cin.value = Cin
 

        await Timer(2, unit="ns")

        assert dut.y.value == A + B + Cin, (
            f"Randomised test failed with: {dut.a.value} + {dut.b.value} + {dut.cin.value}= {dut.y.value}"
        )



