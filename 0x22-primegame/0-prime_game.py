#!/usr/bin/python3
"""prime game"""


def prime(x):
    """prime number"""
    for i in range(2, x):
        if x % i == 0:
            return False
    return True


def rm(n, nm):
    """remove"""
    for i in range(len(nm)):
        if nm[i] % n == 0:
            nm[i] = 0


def isWinner(x, nums):
    """prime game"""
    if not nums or x < 1:
        return None
    m = 0
    b = 0
    for i in range(x):
        t = 0
        nm = list(range(1, nums[i]+1))
        while True:
            c = False
            for k, n in enumerate(nm):
                if n > 1 and prime(n):
                    rm(n, nm)
                    c = True
                    t += 1
                    break
            if c is False:
                break
        if t % 2 != 0:
            m += 1
        else:
            b += 1
    if m < b:
        return "Ben"
    if m > b:
        return "Maria"
    return None
