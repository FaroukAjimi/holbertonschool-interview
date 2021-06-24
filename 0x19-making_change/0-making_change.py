#!/usr/bin/python3
"""
Function File _ makechange(coins, total)
"""


def makeChange(coins, total):
    """make change function
    coins: list of coins
    total: total count"""
    s = 0
    t = 0
    if not coins or coins is None:
        return -1
    if total <= 0:
        return -1
    coins.sort(reverse=True)
    i = 0
    while i <= len(coins) - 1:
        if (s + coins[i] <= total):
            s += coins[i]
            t += 1
        else:
            i += 1
    if s == total:
        return(t)
    if s == 0:
        return(0)
    if s != total:
        return(-1)
    return (-1)
