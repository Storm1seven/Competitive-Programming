import math
from collections import deque, defaultdict
from sys import stdin, stdout
input = stdin.readline
# print = stdout.write
listin = lambda : list(map(int, input().split()))
mapin = lambda : map(int, input().split())
n, m = mapin()
grid = []
for _ in range(n):
    grid.append(input())
wolves = []
for i in range(n):
    for j in range(m):
        if grid[i][j] == 'W':
            wolves.append((i, j))
ans = 0
for x, y in wolves:
    if grid[max(x-1, 0)][y] == 'P' or grid[x][min(y+1, m-1)] == 'P'or grid[min(x+1, n-1)][y] == 'P' or grid[x][max(y-1, 0)] == 'P':
        ans+=1
print(ans)