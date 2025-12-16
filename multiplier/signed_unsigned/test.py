import random
import os

import cocotb
from cocotb.triggers import Timer


@cocotb.test()
async def multiplier_2times2_unsigned(dut):
    """Test for 2 * 2 = 4."""

    A = 2
    B = 2
    # set the mode
    dut.sign.value = 0
    dut.mix.value = 0
    
    dut.a.value = A
    dut.b.value = B
    await Timer(2, unit="ns")


    assert dut.y.value == 4, (
        f"Mult result is incorrect: A={dut.a.value}, B={dut.b.value} {dut.y.value} != 4"
    )


@cocotb.test()
async def multiplier_5times10_unsigned(dut):
    """Test for 5 * 10"""

    A = 5
    B = 10

    dut.a.value = A
    dut.b.value = B
    dut.sign.value = 0
    dut.mix.value = 0
    await Timer(2, unit="ns")


    assert dut.y.value == A*B, (
        f"Adder result is incorrect: A={dut.a.value}, B={dut.b.value} {dut.y.value} != {A*B}"
    )


@cocotb.test()
async def anything_times0_unsigned(dut):
    """Multiplying by zero..."""

    A = random.randint(0, 2**(32)-1);
    B = 0

    dut.a.value = A
    dut.b.value = B
    dut.sign.value = 0
    dut.mix.value = 0

    await Timer(2, unit="ns")


    assert dut.y.value == 0, (
        f"Critical Error: ANYTHING TIMES ZERO IS NOT ZERO! A={dut.a.value}, B={dut.b.value} {dut.y.value} != 0"
    )

#Unsigned
@cocotb.test()
async def mult_random_unsigned_numbers(dut):
    """Multiplying two random integers."""

    A = random.randint(0, 2**(32));
    B = random.randint(0, 2**(32));

    dut.a.value = A
    dut.b.value = B
    dut.sign.value = 0
    dut.mix.value = 0
    
    await Timer(2, unit="ns")


    assert dut.y.value == A*B, (
        f"Error: Big number multiplication failed! A={dut.a.value}, B={dut.b.value} {dut.y.value} != A*B"
    )



#ENGR85B

@cocotb.test()
async def engr85_unsigned(dut):
    """Does the example from the lecture pass? (unsigned)"""
    A = 0x80000000;
    B = 0xC0000000;

    dut.a.value = A
    dut.b.value = B
    dut.sign.value = 0
    dut.mix.value = 0

    await Timer(2, unit="ns")


    assert dut.y.value == 0x6000000000000000, (
        f"Error: Lecture example failed. {dut.a.value}, {dut.b.value}, {dut.y.value} != 0x6000000000000000"
    )


@cocotb.test()
async def engr85_signed(dut):
    """Does the example from the lecture pass? (signed)"""
    A = 0x80000000;
    B = 0xC0000000;

    dut.a.value = A
    dut.b.value = B
    dut.sign.value = 1
    dut.mix.value = 0

    await Timer(2, unit="ns")


    assert dut.y.value == 0x2000000000000000, (
        f"Error: Lecture example failed. {dut.a.value}, {dut.b.value}, {dut.y.value} != 0x2000000000000000"
    )

@cocotb.test()
async def engr85_mixed(dut):
    """Does the example from the lecture pass? (mixed)"""
    A = 0x80000000;
    B = 0xC0000000;

    dut.a.value = A
    dut.b.value = B
    dut.sign.value = 0
    dut.mix.value = 1

    await Timer(2, unit="ns")


    assert dut.y.value == 0xA000000000000000, (
        f"Error: Lecture example failed. {dut.a.value}, {dut.b.value}, {dut.y.value} != 0xA000000000000000. \n Check the order of the ops."
    )

# Signed tests

@cocotb.test()
async def anything_times0_signed(dut):
    """Multiplying by zero..."""

    A = random.randint(-2**(31), 2**(31)-1);
    B = 0

    dut.a.value = A
    dut.b.value = B
    dut.sign.value = 1
    dut.mix.value = 0

    await Timer(2, unit="ns")


    assert dut.y.value == 0, (
        f"Critical Error: ANYTHING TIMES ZERO IS NOT ZERO! A={dut.a.value}, B={dut.b.value} {dut.y.value} != 0"
    )


@cocotb.test()
async def anything_times1_signed(dut):
    """Multiplying by one."""

    A = random.randint(-2**(31), 2**(31)-1);
    B = 1


    dut.sign.value = 1
    dut.mix.value = 0
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

    dut.sign.value = 1
    dut.mix.value = 0
    dut.a.value = A
    dut.b.value = B

    await Timer(2, unit="ns")

    assert dut.y.value == 1, (
           f"Error: Result should be positive! A={dut.a.value}, B={dut.b.value} {dut.y.value} != 1"
    )

@cocotb.test()
async def mult_random_signed_numbers(dut):
    """Multiplies two random signed integers."""
    """ fails on logicarray type conversion idk how"""
    A = random.randint(-2**(31), 2**(31));
    B = random.randint(-2**(31), 2**(31));
    dut.sign.value = 1
    dut.mix.value = 0
    dut.a.value = A
    dut.b.value = B
    # Y= dut.y.value.to_signed()
    await Timer(2, unit="ns")


    assert dut.y.value == A*B, (
        f"Error: Big number multiplication failed! A={dut.a.value}, B={dut.b.value} {dut.y.value} != A*B"
    )
