#!/usr/bin/env python
# spoj 7733. Happy Numbers I

n = input()
lst = []
flag = 1
while True:
    ans = 0
    while n > 0:
        ans += (n % 10) ** 2
        n /= 10
    if ans == 1:
        break
    n = ans
    if ans in lst:
        flag = 0
        break
    else:
        lst.append(ans)
if flag:
    print len(lst) + 1
else:
    print "-1"
