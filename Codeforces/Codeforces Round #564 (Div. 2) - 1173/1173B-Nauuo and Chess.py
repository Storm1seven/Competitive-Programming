import math
from collections import deque, defaultdict
from sys import stdin, stdout
input = stdin.readline
# print = stdout.write
listin = lambda : list(map(int, input().split()))
mapin = lambda : map(int, input().split())
n = int(input())
x = math.ceil((n-1)/2 + 1)
print(x)
ans = []
for i in range(1, x+1):
    print(1, i)
for i in range(n-x):
    ans.append((x, x-i))
ans.reverse()
for i in ans:
    print(*i)