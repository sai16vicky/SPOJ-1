#!/usr/bin/env python
#spoj 12282. Word or number (easiest 2)

lst = ['0','1','2','3','4','5','6','7','8','9']
st = raw_input()
for i in st:
    if i not in lst:
        print "word"
        break
else:
    print "number"
