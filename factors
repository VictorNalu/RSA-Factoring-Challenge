#!/usr/bin/python3

import sys
import time

def factorize(n):
    for i in range(2, int(n**0.5) + 1):
        if n % i == 0:
            return max(i, n // i), min(i, n // i)
    return n, 1

def main(filename):
    with open(filename, 'r') as file:
        for line in file:
            number = int(line.strip())
            start_time = time.time()
            factors = factorize(number)
            print(f"{number}={factors[0]}*{factors[1]}")
            
if __name__ == "__main__":
    if len(sys.argv) != 2:
        print("Usage: factors <file>")
        sys.exit(1)

    filename = sys.argv[1]
    main(filename)
