import math
from collections import deque, defaultdict
from sys import stdin, stdout
input = stdin.readline
listin = lambda : list(map(int, input().split()))
mapin = lambda : map(int, input().split())
n = int(input())
a = listin()
first = [0]*(n+1)
second = [0]*(n+1)
visited = [False]*(n+1)
for i in range(2*n):
    if not visited[a[i]]:
        first[a[i]] = i
        visited[a[i]] = True
    else:
        second[a[i]] = i
ans = 0
for i in range(1, n+1):
    ans+=abs(second[i] - second[i-1])
    ans+=abs(first[i] - first[i-1])
print(ans)