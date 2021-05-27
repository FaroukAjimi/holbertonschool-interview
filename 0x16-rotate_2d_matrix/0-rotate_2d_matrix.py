#!/usr/bin/python3
"""
Rotation function
"""


def rotate_2d_matrix(matrix):
    """matrix - that roatates
    2d matrix
    @matrix: the matrixe to rotate"""
    l = len(matrix)
    for i in range(l // 2):
        for y in range(i, l - i - 1):
            temp = matrix[i][y]
            matrix[i][y] = matrix[l - 1 - y][i]
            matrix[l - 1 - y][i] = matrix[l - 1 - i][l - 1 - y]
            matrix[l - 1 - i][l - 1 - y] = matrix[y][l - 1 - i]
            matrix[y][l - 1 - i] = temp
