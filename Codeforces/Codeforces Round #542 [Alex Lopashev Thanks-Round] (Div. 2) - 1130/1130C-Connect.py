import math
from collections import deque, defaultdict
from sys import stdin, stdout
input = stdin.readline
listin = lambda : list(map(int, input().split()))
mapin = lambda : map(int, input().split())
def mark(grid_map, x, y):
    z = deque([(x, y)])
    k = [(x, y)]
    while z:
        headx, heady = z.popleft()
        if headx-1 >= 0 :
            if not grid_map[headx-1][heady]:
                if grid[headx-1][heady] == '0':
                    z.append((headx-1, heady))
                    grid_map[headx-1][heady] = True
                    k.append((headx-1, heady))
        if heady-1 >=0:
            if not grid_map[headx][heady-1]:
                if grid[headx][heady-1] == '0':
                    z.append((headx, heady-1))
                    grid_map[headx][heady-1] = True
                    k.append((headx, heady-1))
        if heady+1 < n:
            if not grid_map[headx][heady+1]:
                if grid[headx][heady+1] == '0':
                    z.append((headx, heady+1))
                    grid_map[headx][heady+1] = True
                    k.append((headx, heady+1))
        if headx+1 < n:
            if not grid_map[headx+1][heady]:
                if grid[headx+1][heady] == '0':
                    z.append((headx+1, heady))
                    grid_map[headx+1][heady] = True
                    k.append((headx+1, heady))
    return k
n = int(input())
sx, sy = mapin()
fx, fy = mapin()
sx-=1
sy-=1
fx-=1
fy-=1
grid = []
for _ in range(n):
    grid.append(input())
first = []
final = []
for _ in range(n):
    first.append([False]*n)
for _ in range(n):
    final.append([False]*n)
first = mark(first, sx, sy)
final = mark(final, fx, fy)
distmin = 10**9
if set(first).intersection(set(final)):
    print(0)
else:
    for i in first:
        for j in final:
            distmin = min(distmin, (i[0]-j[0])**2+(i[1]-j[1])**2)
    print(distmin)