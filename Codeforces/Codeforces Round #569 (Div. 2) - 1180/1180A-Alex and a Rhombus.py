import math
from collections import deque, defaultdict
from sys import stdin, stdout
input = stdin.readline
# print = stdout.write
listin = lambda : list(map(int, input().split()))
mapin = lambda : map(int, input().split())
n = int(input())
ans = 1
k = 4
for i in range(1, n):
    ans+=k
    k+=4
print(ans)