#!/usr/bin/env python
# spoj 2178. He is offside!

while True:
    a, d = map(int, raw_input().split())
    if a == 0 and d == 0:
        exit(0)
    alst = map(int, raw_input().split())
    dlst = map(int, raw_input().split())
    dlst.sort()
    if min(alst) < dlst[1]:
        print 'Y'
    else:
        print 'N'
