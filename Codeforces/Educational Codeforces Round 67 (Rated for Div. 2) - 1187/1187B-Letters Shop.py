import math
from collections import deque, defaultdict
from sys import stdin, stdout
input = stdin.readline
# print = stdout.write
listin = lambda : list(map(int, input().split()))
mapin = lambda : map(int, input().split())
n = int(input())
s = input().strip('\n')
d = defaultdict(list)
for i in range(n):
    d[s[i]].append(i+1)
for i in 'abcdefghijklmnopqrstuvwxyz':
    if i in d:
        d[i].sort()
m = int(input())
for _ in range(m):
    t = input().strip('\n')
    x = defaultdict(int)
    for i in t:
        x[i]+=1
    ans = 0
    for i, j in x.items():
        ans = max(ans, d[i][j-1])
    print(ans)