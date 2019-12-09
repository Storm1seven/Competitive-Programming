import math
from collections import deque, defaultdict
from sys import stdin, stdout
input = stdin.readline
# print = stdout.write
listin = lambda : list(map(int, input().split()))
mapin = lambda : map(int, input().split())
n, l, r = mapin()
ansmin = [1 for i in range(n)]
ansmax = [1 for i in range(n)]
for i in range(1, l):
    ansmin[-i] = ansmin[-i+1]*2
for i in range(1, r):
    ansmax[i] = ansmax[i-1]*2
for i in range(r, n):
    ansmax[i] = ansmax[i-1]
print(sum(ansmin), sum(ansmax))