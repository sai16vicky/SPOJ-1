#!/usr/bin/env python
# spoj 3442. The last digit
lst2 = [6,2,4,8]
lst3 = [1,3,9,7]
lst4 = [6,4]
lst7 = [1,7,9,3]
lst8 = [6,8,4,2]
lst9 = [1,9]
ct = input()
while ct:
    ct -= 1
    a, b = raw_input().split()
    a = int(a)
    b = int(b)
    a %= 10
    if b == 0:
        print "1"
        continue
    if a in [0,1,5,6]:
        print a
    elif a == 2:
        print lst2[b % 4]
    elif a == 3:
        print lst3[b % 4]
    elif a == 4:
        print lst4[b % 2]
    elif a == 7:
        print lst7[b % 4]
    elif a == 8:
        print lst8[b % 4]
    elif a == 9:
        print lst9[b % 2]
