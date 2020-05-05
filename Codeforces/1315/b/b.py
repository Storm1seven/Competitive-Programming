import math, collections, sys
# input = sys.stdin.readline
def solve():
    a, b, p = map(int, input().split())
    s = input()
    z = []
    for i in range(len(s)-1):
        if not z:
            z.append([s[i], i+1])
            continue
        if z[-1][0] != s[i]:
            z.append([s[i], i+1])
    z = z[::-1]
    na, nb = 0, 0
    for i in z:
        if i[0] == 'A':
            na+=1
        else:
            nb+=1
    tc = na*a+nb*b
    while tc > p and z:
        nxt = z.pop()
        if nxt[0] == 'A':
            na-=1
        else:
            nb-=1
        tc = na*a+nb*b
    if not z:
        print(len(s))
    else:
        print(z[-1][1])
for _ in range(int(input())):
    solve()