import math
from collections import deque, defaultdict
from sys import stdin, stdout
input = stdin.readline
# print = stdout.write
listin = lambda : list(map(int, input().split()))
mapin = lambda : map(int, input().split())
n, m = map(int, input().split())
d = defaultdict(list)
edges = []
for _ in range(m):
    u, v = map(int, input().split())
    edges.append((u-1, v-1))
    d[u-1].append(v-1)
    d[v-1].append(u-1)
color = [-1]*n
color[0] = True
q = deque([0])
flag = True
while q:
    first = q.popleft()
    for i in d[first]:
        if color[i] == -1:
            q.append(i)
            color[i] = not color[first]
        elif color[first] == color[i]:
            flag = False
if flag:
    print('YES')
    print(''.join('1' if color[edges[i][0]] else '0' for i in range(m)))
else:
    print('NO')