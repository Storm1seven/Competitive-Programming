import math
from collections import deque, defaultdict
from sys import stdin, stdout
input = stdin.readline
# print = stdout.write
listin = lambda : list(map(int, input().split()))
mapin = lambda : map(int, input().split())
n = int(input())
a = listin()
d  = defaultdict(int)
for i in a:
    d[i]+=1
ans = []
if d[2]:
    ans.append(2)
    d[2]-=1
else:
    print(*a)
    exit()
if d[1]:
    ans.append(1)
    d[1]-=1
else:
    print(*a)
    exit()
while d[2]:
    ans.append(2)
    d[2]-=1
while d[1]:
    ans.append(1)
    d[1]-=1
print(*ans)