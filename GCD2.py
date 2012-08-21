#!/usr/bin/env python
# spoj 2906. GCD2

def gcd(a, b):
    if b == 0:
        return a
    else:
        return gcd(b, a % b)

ct = input()
while ct:
    ct -= 1
    a, b = input().split()
    print (gcd(int(a), int(b)))

    
    
