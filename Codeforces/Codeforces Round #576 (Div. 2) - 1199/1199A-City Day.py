import math
from collections import deque, defaultdict
from sys import stdin, stdout
input = stdin.readline
# print = stdout.write
listin = lambda : list(map(int, input().split()))
mapin = lambda : map(int, input().split())
n, x, y = mapin()
a = listin()
for i in range(n):
    m = a[i]
    for j in range(max(i-x, 0), min(i+y+1,n)):
        m = min(m, a[j])
    if m == a[i]:
        print(i+1)
        break