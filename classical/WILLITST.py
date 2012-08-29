#!/usr/bin/env python
# spoj 9948. Will it ever stop
n = input()
lst = []
while n > 1:
    if  n in lst:
        n = -1
    elif n % 2 == 0:
        n /= 2
    else:
        n = 3 * n + 3
        lst.append(n)
print lst
if n == -1:
    print "NIE"
else:
    print "TAK"
