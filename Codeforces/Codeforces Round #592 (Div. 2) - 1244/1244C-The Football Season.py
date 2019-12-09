import math
from collections import deque, defaultdict
from sys import stdin, stdout
input = stdin.readline
# print = stdout.write
listin = lambda : list(map(int, input().split()))
mapin = lambda : map(int, input().split())
n, p, w, d = mapin()
for y in range(w):
    if (p-(y*d))%w:
        continue
    x = (p-(y*d))//w
    z = n-x-y
    if x >= 0 and y >= 0 and z >= 0:
        print(x, y, z)
        exit()
print(-1)