#!/usr/bin/env python
# spoj 95. Street Parade

while True:
    n = input()
    if n == 0:
        exit(0)
    lst = map(int, raw_input().split())
    stack = [n+1]
    pas = 1
    i = 0
    while i < n:
        if lst[i] == pas:
            pas += 1
        else:
            if stack[-1] == pas:
                stack.pop()
                pas += 1
                continue
            if lst[i] > stack[-1]:
                stack.append(lst[i])
                break
            else:
                stack.append(lst[i])
        i += 1
    while stack[-1] == pas:
        stack.pop()
        pas += 1
        if pas > n:
            break
    if pas > n:
        print "yes"
    else:
        print "no"
        
