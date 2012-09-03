#!/usr/bin/env python
# spoj 739. The Moronic Cowmpouter

n = input()
if n == 0:
    print "0"
    exit(0)
lst = []
while True:
    if n == 1:
        lst.append(1)
        break
    if n == 0:
        lst.append(0)
        break
    if abs(n) % 2 == 0:
        lst.append(0)
        n /= -2
    else:
        lst.append(1)
        n = (n - 1) / -2
lst = lst[::-1]
i = 0
if lst[0] == 0:
    while lst[i] == 0:
        i += 1
st = ''
for i in range(i, len(lst)):
    st += str(lst[i])
print st
