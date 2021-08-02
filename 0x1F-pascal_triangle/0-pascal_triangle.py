#!/usr/bin/python3
"""
0-pascal_triangle.py
"""


def pascal_triangle(n):
    """pascal tringale generator
    @n: triangle size"""
    matrix = []
    l = []
    for i in range(1, n + 1):
        for y in range(i):
            if (y == i - 1 or y == 0):
                l.append(1)
            else:
                l.append(matrix[i - 2][y - i + 1] + matrix[i - 2][y - i])
        matrix.append(l)
        l = []
    return(matrix)
