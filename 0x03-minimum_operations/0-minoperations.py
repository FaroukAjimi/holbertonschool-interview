#!/usr/bin/python3
"""Minoop"""


def minOperations(n):
    """miniop"""
    c = 0
    h = 1
    cp = 1
    if not isinstance(n, int) and n < 2:
        return 0
    while (h != n):
        if (n % h == 0):
            cp = h
            h = 2 * h
            c += 2
        else:
            h = h + cp
            c += 1
    return (c)
