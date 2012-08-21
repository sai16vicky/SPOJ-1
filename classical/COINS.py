#!/usr/bin/env python
# spoj 346. Bytelandian gold coins
dt = {0:0, 1:1, 2:2}
def coin(n):
    if n in dt:
        return dt[n]
    else:
        tmp = coin(n/2) + coin(n/3) + coin(n/4)
        if n < tmp:
            dt[n] = tmp
        else:
            dt[n] = n
        return dt[n]
while True:
    try:
        i = input()
        print coin(i)
    except:
        break
