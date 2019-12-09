import math
from collections import deque, defaultdict
from sys import stdin, stdout
input = stdin.readline
# print = stdout.write
listin = lambda : list(map(int, input().split()))
mapin = lambda : map(int, input().split())
n, p = mapin()
for k in range(1, 40):
    # print(bin(n-k*p)[2:], k)
    if bin(n-k*p)[2:].count("1") <= k and n-k*p >= k:
        print(k)
        exit()
print(-1)