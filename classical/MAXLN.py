#!/usr/bin/env python
# spoj 8670. THE MAX LINES

ct = input()
se = 1
while ct:
    ct -= 1
    r = input()
    print "Case %d: %.2f" % (se, 4 * r * r + 0.25)
    se += 1
