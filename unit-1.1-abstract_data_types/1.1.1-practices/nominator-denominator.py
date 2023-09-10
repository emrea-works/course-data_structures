def add_relationals(x):
        nx, dx = numer(x), denom(x)
        ny, dy = numer(y), denom(y)
        return rational(nx * dy + ny * dx, dx * dy)

def mul_rationals(x, y):
        return rational(numer(x) * numer(y), denom(x) * denom(y))

def equal_rationals(x, y):
        return numer(x) * denom(y) == numer(y) * denom(x)
