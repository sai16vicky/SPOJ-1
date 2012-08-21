#!/usr/bin/env python
# spoj 1025. Fashion Shows
cas = input()
while cas:
    ct = input()
    men = raw_input().split()
    wom = raw_input().split()
    men = map(int, men)
    wom = map(int, wom)
    men.sort()
    wom.sort()
    i = 0
    s = 0
    while i < ct:
        s += men[i] * wom[i]
        i += 1
    print s
    cas -= 1
