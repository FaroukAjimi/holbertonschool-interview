#!/usr/bin/python3
def minOperations(n):
    c = 0
    h = 1
    cp = 1
    while (h != n):
        if (n % h == 0):
            cp = h
            h = 2 * h
            c += 2
        else:
            h = h + cp
            c += 1
    return (c)
