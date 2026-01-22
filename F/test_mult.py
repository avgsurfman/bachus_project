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

    await Timer(2, unit="ns")

    expected = 0b01000001100000000000000000000000

    assert dut.y.value == expected, (
        f"Div result is incorrect: A={dut.a.value}, B={dut.b.value} {dut.y.value} != {expected}"
    )

@cocotb.test()
async def mult_float_exp_19_19(dut):
    """"""

    A = 0b00111111111111111111111111111111 # 1.9
    B = 0b00111111111111111111111111111111 # 1.9
    
    dut.a.value = A
    dut.b.value = B

    await Timer(2, unit="ns")

    expected = 0b01000000011111111111111111111110

    assert dut.y.value == expected, (
        f"Mult result is incorrect: A={dut.a.value}, B={dut.b.value} {dut.y.value} != {expected}"
    )




@cocotb.test()
async def mult_float_byzero(dut):
    """"""

    A = 0b01000000000000000000000000000000 # 2.0
    B = 0b00000000000000000000000000000000 # 0.0
    
    dut.a.value = A
    dut.b.value = B

    await Timer(2, unit="ns")


    assert dut.y.value == 0, (
        f"Div result is incorrect: A={dut.a.value}, B={dut.b.value} {dut.y.value} != 1"
    )
