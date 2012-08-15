#!/usr/bin/env python
# spoj 2123. Candy I
while True:
    ct = input()
    if ct == -1:
        break
    i = ct
    s = 0
    lst = []
    while ct:
        tmp = input()
        lst.append(tmp)
        s += tmp
        ct -= 1
    if s % i != 0:
        print -1
    else:
        avg = s / i 
        tmpLst = [i for i in lst if i < avg]
        ans = 0
        for e in tmpLst:
            ans += avg - e
        print ans
