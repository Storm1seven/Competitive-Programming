import math
from collections import deque, defaultdict
from sys import stdin, stdout
input = stdin.readline
# print = stdout.write
listin = lambda : list(map(int, input().split()))
mapin = lambda : map(int, input().split())
n, k = mapin()
d = defaultdict(list)
for _ in range(n-1):
    u, v, z = mapin()
    if not z:
        d[u-1].append(v-1)
        d[v-1].append(u-1)
mark = [0]*n
tree_num = 1
for i in range(n):
    if not mark[i]:
        mark[i] = tree_num
        q = deque([i])
        while q:
            first = q.pop()
            for j in d[first]:
                if not mark[j]:
                    mark[j] = tree_num
                    q.append(j)
        tree_num+=1
count = defaultdict(int)
for i in mark:
    count[i]+=1
ex = 0
mod = 10**9 + 7
for i in count.values():
    ex+=pow(i, k, mod)
print((pow(n, k, mod)+mod - ex)%mod)