import math
from collections import deque, defaultdict
from sys import stdin, stdout
input = stdin.readline
# print = stdout.write
listin = lambda : list(map(int, input().split()))
mapin = lambda : map(int, input().split())
n = int(input())
d = defaultdict(set)
for i in range(n-1):
    u = int(input())
    d[u-1].add(i+1)
leaf = set([])
for i in range(n):
    if i not in d:
        leaf.add(i)
for i in d.items():
    if i[0] in leaf:
        continue
    else:
        if len(leaf & i[1]) >= 3:
            continue
        else:
            print("No")
            exit()
print("Yes")