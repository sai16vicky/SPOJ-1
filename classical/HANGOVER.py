#!/usr/bin/env python
# spoj 902. Hangover

def card(n):
    i = 2
    ans = 0
    ct = 0
    while True:
        ans += 1.0 / i
        ct += 1
        if ans >= n:
            break
        i += 1
    return ct
while True:
    c = input()
    if c == 0.00:
        exit(0)
    else:
        print "%d card(s)" % card(c)
