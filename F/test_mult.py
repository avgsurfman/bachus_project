import random
import os

import cocotb
from cocotb.triggers import Timer


@cocotb.test()
async def mult_float_basic_2x2(dut):
    """"""

    A = 0b01000000000000000000000000000000
    B = 0b01000000000000000000000000000000
    
    dut.a.value = A
    dut.b.value = B
    dut.rounding.value = 0 # RNE

    await Timer(2, unit="ns")
    
    expected = 0b01000000100000000000000000000000    

    assert dut.y.value == expected, (
        f"Mult result is incorrect: A={dut.a.value}, B={dut.b.value} {dut.y.value} != 4.0"
    )


@cocotb.test()
async def mult_float_exp_basic_4x4(dut):
    """"""

    A = 0b01000000100000000000000000000000 # 4.0
    B = 0b01000000100000000000000000000000 # 4.0
    
    dut.a.value = A
    dut.b.value = B
    dut.rounding.value = 0 # RNE
    
    await Timer(2, unit="ns")

    expected = 0b01000001100000000000000000000000

    assert dut.y.value == expected, (
        f"Mult result is incorrect: A={dut.a.value}, B={dut.b.value} {dut.y.value} != {expected}"
    )

@cocotb.test()
async def mult_float_exp_19_19(dut):
    """"""

    A = 0b00111111111111111111111111111111 # 1.9
    B = 0b00111111111111111111111111111111 # 1.9
    
    dut.a.value = A
    dut.b.value = B
    dut.rounding.value = 0 # RNE

    await Timer(2, unit="ns")

    expected = 0b01000000011111111111111111111110

    assert dut.y.value == expected, (
        f"Mult result is incorrect: A={dut.a.value}, B={dut.b.value} {dut.y.value} != {expected}"
    )




@cocotb.test()
async def mult_returnzero(dut):
    """"""

    A = 0b01000000000000000000000000000000 # 2.0
    B = 0b00000000000000000000000000000000 # 0.0
    
    dut.a.value = A
    dut.b.value = B
    dut.rounding.value = 0 # RNE

    await Timer(2, unit="ns")


    assert dut.y.value == 0, (
        f"Div result is incorrect: A={dut.a.value}, B={dut.b.value} {dut.y.value} != 1"
    )


# test the NaN
# h7fc00000

@cocotb.test()
async def mult_returnNaN(dut):
    """
    Test whether the NaNs is generated on inf * 0
    """

    A = 0x7f800000
    B = 0x00000000
    dut.a.value = A
    dut.b.value = B
    dut.rounding.value = 0 # RNE
    
    await Timer(2, unit="ns")


    assert dut.y.value == 0x7fc00000, (
        f"NaNs are not generated! {dut.y.value}"
)


@cocotb.test()
async def mult_propagateNaN(dut):
    """
    Test whether the NaNs are propagated.
    """

    A = 0x7fc00000
    B = 0x40000000

    dut.a.value = A
    dut.b.value = B
    dut.rounding.value = 0 # RNE
    
    await Timer(2, unit="ns")


    assert dut.y.value == 0x7fc00000, (
        f"NaNs are not propagated! {dut.y.value}"
)
