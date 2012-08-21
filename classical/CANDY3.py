#!/usr/bin/env python
# spoj 2148. Candy III
ct = input()
while ct:
    raw_input()
    i = input()
    s = 0
    tmp = i
    while i:
        x = input()
        s += x
        i -= 1
    if s % tmp == 0:
        print "YES"
    else:
        print "NO"
    ct -= 1

