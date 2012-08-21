#!/usr/bin/env python
# spoj 1112. Number Steps

MSG = "No Number"
def nsteps(x, y):
    if x in (0, 1):
        if y == x:
            print x
        else:
            print MSG 
    elif not x % 2:
        if y == x or y == x - 2:
            print x + y
        else:
            print MSG
    else:
        if y == x:
            print x + y - 1
        elif y == x - 2:
            print x + y - 1
        else:
            print MSG
ct = input()
while ct:
    x, y = raw_input().split()
    nsteps(int(x), int(y))
    ct -= 1

    
