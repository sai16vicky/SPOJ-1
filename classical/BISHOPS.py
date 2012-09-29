#!/usr/bin/env python
# spoj 206. Bitmap

while True:
    try:
        n = input()
        if n == 1:
            print 1
        else:
            print n + n - 2
    except:
        exit(0)
