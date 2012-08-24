#!/usr/bin/env python
# spoj 1030. Triple Fat Ladies
ct = input()
lst = [942,192,442,692]
while ct:
    ct -= 1
    n = input()
    print (n - 1) / 4 * 1000 + lst[n % 4]
