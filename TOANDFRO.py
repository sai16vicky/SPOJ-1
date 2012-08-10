#!/usr/bin/env python
# spoj 400. To and Fro
def tofro(st, num):
    lst = []
    ln = len(st)
    i = 0
    while i < ln:
        lst.append(st[i:i + num])
        i += num
    col = ln / num
    for i in range(col):
        if i % 2:
            lst[i] = lst[i][::-1]
    tmpStr = ''
    for r in range(num):
        for c in range(col):
            tmpStr += lst[c][r]
    print tmpStr

while True:
    num = input()
    if num == 0:
        break
    tofro(raw_input(), num)
