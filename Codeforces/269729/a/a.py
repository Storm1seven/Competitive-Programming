import math, collections, sys
input = sys.stdin.readline
n, s = map(int, input().split())
ans = 0
z = []
for i in range(n):
    z.append(list(map(int, input().split())))
z.sort(reverse=True)
ct = 0
cf = s
for i in z:
    ct+=cf-i[0]
    cf = i[0]
    if i[1] > ct:
        ct = i[1]
print(ct+cf)