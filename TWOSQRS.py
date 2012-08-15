#!/usr/bin/python
import math
def chk(a, b):
    tmp = (a + b) * (a - b)
    if tmp == math.sqrt(tmp**2):
        return 1
    return 0
ct = input()
while ct:
    i = input()
    flag = 0
    tmp = i
    if tmp == math.sqrt(tmp**2):
        print "YES"
        continue
    for e in range(1, i):
        if chk(i, e):
            flag = 1
            break
    if flag == 1:
        print "YES"
    else:
        print "NO"
    ct -= 1
