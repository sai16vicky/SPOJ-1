#!/usr/bin/env python
# spoj 7424. Girls and Boys

import math
while 1:
    g, b = map(int, raw_input().split())
    if g == -1 and b == -1:
        exit(0)
    if g == 0 and b == 0:
        print '0'
    elif g == 0:
        print b
    elif b == 0:
        print g
    elif g == b:
        print 1
    else:
        if g > b:
            g, b = b, g
        print "%.f" % math.ceil(b/(g + 1.0))
            
