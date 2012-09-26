#!/usr/bin/env python
# spoj 7190. Guess the Number

def gcd(a, b):
    if a % b == 0:
        return b
    else:
        return gcd(b, a % b)
    
while 1:
    st = raw_input()
    if st == '*':
        exit(0)
    ans = 1
    leng = len(st)
    for i in range(leng - 1, -1, -1):
        if st[i] == 'Y':
            ans = ans * (i + 1) / gcd(ans, i + 1)
    for i in range(leng):
        if st[i] == 'N':
            if ans % (i + 1) == 0:
                ans = -1
                break
    print ans
    
