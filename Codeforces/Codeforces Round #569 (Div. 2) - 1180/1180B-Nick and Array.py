import math
from collections import deque, defaultdict
from sys import stdin, stdout
input = stdin.readline
# print = stdout.write
listin = lambda : list(map(int, input().split()))
mapin = lambda : map(int, input().split())
n = int(input())
a = listin()
for i in range(n):
        if a[i] >= 0:
            a[i] = - a[i] - 1
if n%2:
    k = min(a)
    for i in range(n):
        if a[i] == k:
            a[i] = -a[i]-1
            break
print(*a)