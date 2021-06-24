#!/usr/bin/python3
"""
Main file for testing
"""

makeChange = __import__('0-making_change').makeChange

print(makeChange([5, 5], 12))

print(makeChange([1256, 54, 48, 16, 102], 1453))
