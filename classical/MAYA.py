#!/usr/bin/env python
# spoj 94. Numeral System of the Maya

def maya(st):
    if st == 'S':
        return 0
    ans = 0
    for i in st:
        if i == ' ':
            continue
        elif i == '.':
            ans += 1
        else:
            ans += 5
    return ans
while True:
    n = input()
    if n == 0:
        exit(0)
    ans = 0
    p = 0
    if n == 1:
        p = 1
    elif n == 2:
        p = 20
    elif n == 3:
        p = 360
    else:
        i = 3
        p = 360
        while i < n:
            p *= 20
            i += 1
    #print p
    while n:
        n -= 1
        st = raw_input()
        ans += maya(st) * p
        if p == 360:
            p = 20
        else:
            p /= 20
       # print ans, maya(st),p
    print ans
    blank = raw_input()
