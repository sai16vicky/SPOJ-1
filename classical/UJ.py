#spoj 1002. Uncle Jack

while True:
    a, b = raw_input().split()
    a = int(a)
    b = int(b)
    if a == 0 and b == 0:
        break
    print a ** b
