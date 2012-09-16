#!/usr/bin/env python
# spoj 8374. PARKET

def sort(a, b):
    if a < b:
        return b, a
    else:
        return a, b
    
r, b = map(int, raw_input().split())
tmp = r + b
L = 3
while True:
    if tmp % L == 0:
        W = tmp / L
        if W + L == (r + 4) / 2:
            W, L = sort(W, L)
            print W, L
            break
    L += 1
