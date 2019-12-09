import math
from collections import deque, defaultdict
from sys import stdin, stdout
input = stdin.readline
# print = stdout.write
listin = lambda : list(map(int, input().split()))
mapin = lambda : map(int, input().split())
n, m = mapin()
s = set([])
for i in range(m):
    p = listin()
    p.sort()
    p = tuple(p)
    s.add(p)
z = list(s)
n = len(s)
degree = defaultdict(int)
for i in z:
    degree[i[0]]+=1
    degree[i[1]]+=1
p = list(degree.keys())
q = list(degree.values())
deg = []
for i in range(len(q)):
    deg.append((q[i], p[i]))
deg.sort(reverse = True)
if deg[0][0]+deg[1][0] > n:
    print("YES")
elif deg[0][0]+deg[1][0] < n:
    print("NO")
else:
    k = defaultdict(list)
    for i in deg:
        k[i[0]].append(i[1])
    for i in k.keys():
        if n-i in k:
            for a in k[i]:
                for b in k[n-i]:
                    if (min(a, b), max(a, b)) not in s and a!=b:
                        print("YES")
                        exit()
    print("NO")