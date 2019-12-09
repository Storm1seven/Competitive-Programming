import math
from collections import deque, defaultdict
from sys import stdin, stdout
#input = stdin.readline
# print = stdout.write
listin = lambda : list(map(int, input().split()))
mapin = lambda : map(int, input().split())
n = int(input())
a = listin()
k = -1
count = 0
for i in range(n):
    k = max(k, a[i]-1)
    if k == i:
        count+=1
print(count)