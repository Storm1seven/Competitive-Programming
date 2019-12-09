import math
from collections import deque, defaultdict
from sys import stdin, stdout
input = stdin.readline
# print = stdout.write
listin = lambda : list(map(int, input().split()))
mapin = lambda : map(int, input().split())
n, k = mapin()
d = ((2*n+3)**2 - 4*(n**2+n-2*k))**0.5
c1 = ((2*n+3) + d)/2
c2 = ((2*n+3) - d)/2
if (c1 < n):
    print(int(c1))
else:
    print(int(c2))