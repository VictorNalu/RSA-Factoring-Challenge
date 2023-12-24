#!/usr/bin/python3

import math
import sys

def factorize(n):
    for i in range(2, int(math.sqrt(n)) + 1):
        if n % i == 0:
            return max(i, n // i), min(i, n // i)
    return n, 1

def main(filename):
    with open(filename, 'r') as file:
        for line in file:
            number = int(line.strip())
            factors = factorize(number)
            print(f"{number}={factors[0]}*{factors[1]}")

if __name__ == "__main__":
    if len(sys.argv) != 2:
        print("Usage: factors <file>")
        sys.exit(1)

    filename = sys.argv[1]
    main(filename)
