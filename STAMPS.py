#!/usr/bin/env python
# spoj 3375. Stamps
ct = input()
se = 1
while ct:
    ct -= 1
    stamp, num = raw_input().split()
    lst = raw_input().split()
    lst = map(int, lst)
    stamp = int(stamp)
    num = int(num)
    lst.sort()
    lst.reverse()
    ans = 0
    su = 0
    for i in lst:
        su += i
        ans += 1
        if su >= stamp:
            break
    print "Scenario #%s:" % se
    if su >= stamp:
        print ans
    else:
        print "impossible"
    print
    se += 1
