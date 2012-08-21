#!/usr/bin/env python
# spoj 7974. What¡¯s Next
while True:
    a, b, c = raw_input().split()
    a = int(a)
    b = int(b)
    c = int(c)
    if(c == 0):
        break
    if(c - b == b - a):
        print "AP %d" % (c + c - b)
    else:
        print "GP %d" % (c * (c / b))
