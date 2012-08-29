#!/usr/bin/env python
# spoj 2727. Army Strength
ct = input()
while ct:
    ct -= 1
    raw_input()
    raw_input()
    glst = map(int, raw_input().split())
    mlst = map(int, raw_input().split())
    if max(glst) >= max(mlst):
        print "Godzilla"
    else:
        print "MechaGodzilla"

