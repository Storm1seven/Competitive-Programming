from collections import defaultdict
from fractions import gcd
from sys import stdin
input = stdin.readline
n = int(input())
a = list(map(int, input().split()))
b = list(map(int, input().split()))
d = defaultdict(int)
delta = 0
for i in range(n):
    if a[i]!=0:
        if b[i]!=0:
            g = gcd(a[i], b[i])
            d[b[i]/g, a[i]/g]+=1
        else:
            d[(0, 0)]+=1
    if a[i] == 0 and b[i] == 0:
        delta+=1
if d:
    print(max(d.values())+delta)
else:
    print(0+delta)