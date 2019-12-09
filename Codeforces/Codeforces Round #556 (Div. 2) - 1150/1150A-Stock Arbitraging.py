import math
from collections import deque, defaultdict
from sys import stdin, stdout
input = stdin.readline
# print = stdout.write
listin = lambda : list(map(int, input().split()))
mapin = lambda : map(int, input().split())
n, m, r = mapin()
a = listin()
b = listin()
ans = (max(b) - min(a))*(r//min(a))
if (ans>0):
    print(ans+r)
else:
    print(r)