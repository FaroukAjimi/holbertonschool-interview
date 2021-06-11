#!/usr/bin/python3
"""
UTF-8 validation
"""


def validUTF8(data):
    """UTF-8 validation"""
    byts = 0
    for itm in data:
        r = format(itm, '#010b')[-8:]
        if byts == 0:
            for bit in r:
                if bit == '0':
                    break
                byts += 1
            if byts == 0:
                continue
            if byts == 1 or byts > 4:
                return False
        else:
            if not (r[0] == '1' and r[1] == '0'):
                return False
        byts = byts - 1
    if byts == 0:
        return True
    return False
