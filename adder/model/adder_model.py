"""
Adder model for the simulation. Unfortunately it doesn't work since the python runner sucks.
"""

def adder_model(a: int, b: int, cin: int, xlen: int) -> int:
    """Model of a RISC-V adder."""
    res = a + b + cin;
    if  res >= 2**(xlen) or res < -2**(xlen):
       return res & 0xFFFFFFFF;
    else:
       return res
