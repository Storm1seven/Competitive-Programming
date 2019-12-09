import math
from collections import deque, defaultdict
from sys import stdin, stdout
input = stdin.readline
# print = stdout.write
listin = lambda : list(map(int, input().split()))
mapin = lambda : map(int, input().split())
n = int(input())
d = defaultdict(int)
d["polycarp"] = 1
ans = 1
for i in range(n):
    name1, rep, name2 = input().split()
    name1 = name1.lower()
    name2 = name2.lower()
    d[name1] = d[name2]+1
    ans = max(ans, d[name1])
print(ans)