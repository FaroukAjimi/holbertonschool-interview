#!/usr/bin/python3
"""stats"""


import sys

i = 0
lis = [200, 301, 400, 401, 403, 404, 405, 500]
su = 0
new = [0, 0, 0, 0, 0, 0, 0, 0]

try:
    for line in sys.stdin:
        s = line.split()
        su = su + int(s[-1])
        i = i + 1
        if len(s) < 2:
            pass
        if int(s[-2]) in lis:
            x = lis.index(int(s[-2]))
            new[x] = new[x] + 1
        if i == 10:
            i = 0
            print("File size: {}".format(su))
            for x in range(8):
                if new[x] != 0:
                    print('{}: {}'.format(lis[x], new[x]))
except Exception:
    pass
finally:
    for x in range(8):
        print(lis[x], new[x])
