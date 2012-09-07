# spoj 7105. Reverse the Input

n = input();s = []
while True:
    try:t = raw_input().split();s+=t
    except:break
for i in s[::-1]:
    for t in range(n):print i[::-1],
