#!/usr/bin/env python
# spoj 11931. AMZ Word

lst = [0] * 25
lst[0] = 1
lst[1] = 3
for i in range(2, 25):
    lst[i] = 2 * lst[i - 1] + lst[i - 2]
n = input()
print lst[n]
