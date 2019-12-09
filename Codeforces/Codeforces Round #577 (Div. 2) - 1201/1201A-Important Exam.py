import math
from collections import deque, defaultdict
from sys import stdin, stdout
# print = stdout.write
listin = lambda : list(map(int, input().split()))
mapin = lambda : map(int, input().split())
n, m = mapin()
d = {j:{i:0 for i in "ABCDE"} for j in range(m)}
for i in range(n):
    s = input()
    for j in range(m):
        d[j][s[j]]+=1
z = listin()
ans = 0
for i in range(m):
    ans+=max(list(d[i].values()))*z[i]
print(ans)