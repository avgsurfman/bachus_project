def adder_model(a: int, b: int, cin: int, xlen: int) -> int:
    """Model of a RISC-V adder."""
    return (a + b + cin) % 2**(x_len)
