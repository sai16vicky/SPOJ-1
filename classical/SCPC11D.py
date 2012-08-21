#!/usr/bin/env python
# spoj 9754. Egypt

while True:
    lst = raw_input().split()
    lst = map(int, lst)
    lst.sort()
    if lst[2] == 0:
        break
    if lst[0] * lst[0] + lst[1] * lst[1] == lst[2] * lst[2]:
        print "right"
    else:
        print "wrong"
    
    
