#!/usr/bin/env python
# spoj 379. Ambiguous Permutations
while True:
    n = input()
    if n == 0:
        exit(0)
    lst = map(int, raw_input().split())
    tmp = [0] * n
    for i in range(0, n):
        tmp[lst[i]] = i + 1
    if tmp == lst:
        print "ambiguous"
    else:
        print "not ambiguous"
