import math
from collections import deque, defaultdict
from sys import stdin, stdout
input = stdin.readline
# print = stdout.write
listin = lambda : list(map(int, input().split()))
mapin = lambda : map(int, input().split())
n = int(input())
a = listin()
ans = [1]
s = sum(a)
for i in range(1, n):
    if a[0] >= 2*a[i]:
        ans.append(i+1)
k = 0
for i in ans:
    k+=a[i-1]
if k > s//2:
    print(len(ans))
    print(*ans)
else:
    print(0) 