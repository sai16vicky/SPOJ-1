#!/usr/bin/env python
# spoj 12111. FirstProblem

ct = input()
while ct:
    ct -= 1
    n = input()
    a = map(int, raw_input().split())
    b = map(int, raw_input().split())
    a.sort()
    b.sort()
    b = b[::-1]
    su = 0
    for i in range(n):
        su += a[i] * b[i]
    print su
