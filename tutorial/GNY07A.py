#!/usr/bin/env python
# spoj 2523. Mispelling

ct = input()
i = 1
while ct:
    ct -= 1
    n, s = raw_input().split()
    n = int(n)
    print "%d %s" % (i, "".join([s[:n - 1], s[n:]]))
    i += 1
                                 
