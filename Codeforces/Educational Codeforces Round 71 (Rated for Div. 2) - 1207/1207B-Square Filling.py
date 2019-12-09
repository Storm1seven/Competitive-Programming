import math
from collections import deque, defaultdict
from sys import stdin, stdout
input = stdin.readline
# print = stdout.write
listin = lambda : list(map(int, input().split()))
mapin = lambda : map(int, input().split())
n, m = mapin()
a = []
c = 0
for i in range(n):
    a.append(listin())
    c+=a[i].count(1)
b = [[0 for i in range(m)] for i in range(n)]
ans = []
for i in range(n-1):
    for j in range(m-1):
        if (a[i][j] == 1 and a[i+1][j] == 1 and a[i][j+1] == 1 and a[i+1][j+1] == 1):
            b[i][j] = b[i+1][j] = b[i][j+1] = b[i+1][j+1] = 1
            ans.append([i+1, j+1])
if a == b:
    print(len(ans))
    for i in ans:
        print(*i)
else:
    print(-1)