#!/usr/bin/env python
# spoj 1419. A Game with Numbers

n = input()
if n % 10 == 0:
    print "2"
else:
    print "1"
    print n % 10
