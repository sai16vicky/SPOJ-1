#!/usr/bin/env python
# spoj 2157. Anti-Blot System
ct = input()
st = 'machula'
while ct:
    ct -= 1
    raw_input()
    tmpLst = raw_input().split()
    if st in tmpLst[0]:
        print "%d + %s = %s" % (int(tmpLst[4]) - int(tmpLst[2]), tmpLst[2], tmpLst[4])
    elif st in tmpLst[2]:
        print "%s + %d = %s" % (tmpLst[0], int(tmpLst[4]) - int(tmpLst[0]), tmpLst[4])
    elif st in tmpLst[4]:
        print "%s + %s = %d" % (tmpLst[0], tmpLst[2], int(tmpLst[0]) + int(tmpLst[2]))
