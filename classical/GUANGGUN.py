#!/usr/bin/env python
# spoj 9952. 111бн1 Squared

def s(n):
    if n < 10:
        return n * n
    else:
        a = n % 9
        return n / 9 * 81 + a * a 

while True:
    try:
        n = input()
        print s(n)
    except:
        exit(0)
