import math
from collections import deque, defaultdict
from sys import stdin, stdout
input = stdin.readline
# print = stdout.write
listin = lambda : list(map(int, input().split()))
mapin = lambda : map(int, input().split())
n = int(input())
a = listin()
for i in range(n-2, -1, -1):
    if a[i] >= a[i+1]:
        a[i] = max(a[i+1]-1, 0)
print(sum(a))