#!/usr/bin/env python
# spoj 1026. Favorite Dice

def exp(n):
    su = 0
    for i in range(1,n + 1):
        su += 1.0/i
    return  n * su
ct = input()
while ct:
    ct -= 1
    n = input()
    print "%.2f" % exp(n)
