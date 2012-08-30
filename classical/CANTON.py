#!/usr/bin/env python
# spoj 302. Count on Cantor

ct = input()
while ct:
    ct -= 1
    n = input()
    k = 1
    tmp = 0
    while True:
        tmp = (k + 1) * k / 2
        if tmp >= n:
            break
        else:
            k += 1
    if k % 2 != 0:
        print "TERM %d IS %d/%d" % (n, tmp - n + 1, n - (k - 1) * k / 2)
    else:
        print "TERM %d IS %d/%d" % (n, n - (k - 1) * k / 2, tmp - n + 1)
