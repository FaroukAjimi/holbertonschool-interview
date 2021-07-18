#!/usr/bin/python3
"""
0-island_permimeter
"""


def island_perimeter(grid):
    """function perimeter"""
    t = 0
    lg = len(grid)
    if lg == 0 or lg > 100:
        return 0
    m = len(grid[0])
    for i in range(lg):
        for j in range(m):
            if (grid[i][j] == 1):
                if (grid[i - 1][j] == 0):
                    t += 1
                if (grid[i + 1][j] == 0):
                    t += 1
                if (grid[i][j + 1] == 0):
                    t += 1
                if (grid[i][j - 1] == 0):
                    t += 1
    return(t)
