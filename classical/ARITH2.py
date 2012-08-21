#!/usr/bin/env python
# spoj 4452. Simple Arithmetics II
ct = input()
while ct:
    ct -= 1
    tmp = raw_input()
    st = raw_input().split()
    res = int(st[0])
    for i in range(1, len(st), 2):
        if st[i] == '=':
            break
        opr = int(st[i + 1])
        if st[i] == '+':
            res += opr
        elif st[i] == '-':
            res -= opr
        elif st[i] == '*':
            res *= opr
        elif st[i] == '/':
            res /= opr
    print res

