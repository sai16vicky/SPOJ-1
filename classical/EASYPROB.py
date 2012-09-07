#!/usr/bin/env python
# spoj 1688. A Very Easy Problem!

#137=2(2(2)+2+2(0))+2(2+2(0))+2(0)
#1315=2(2(2+2(0))+2)+2(2(2+2(0)))+2(2(2)+2(0))+2+2(0)
#73=2(2(2)+2)+2(2+2(0))+2(0)
#136=2(2(2)+2+2(0))+2(2+2(0))
#255=2(2(2)+2+2(0))+2(2(2)+2)+2(2(2)+2(0))+2(2(2))+2(2+2(0))+2(2)+2+2(0)
#1384=2(2(2+2(0))+2)+2(2(2+2(0)))+2(2(2)+2)+2(2(2)+2(0))+2(2+2(0))
#16385=2(2(2+2(0))+2(2)+2)+2(0)

def tob(n):
    st = ""
    while n > 0:
        st += str(n % 2)
        n /= 2
    return st

def pro(st):
    lst = []
    for i in range(len(st)):
        if st[i] == '1':
            if i == 0:
                lst.append('2(0)')
            elif i == 1:
                lst.append('2')
            else:
                tmp = pro(tob(i))
                lst.append("2("+tmp+")")
    out = str(lst[-1])
    for i in lst[-2::-1]:
        out += '+'+str(i)
    return out

arr = [137, 1315, 73, 136, 255, 1384, 16385]
for i in arr:
    print "%d=%s" % (i, pro(tob(i)))
