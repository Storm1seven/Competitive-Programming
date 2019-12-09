from collections import defaultdict
from sys import stdin, stdout
input = stdin.readline
listin = lambda : list(map(int, input().split()))
mapin = lambda : map(int, input().split())
n, k = mapin()
a = listin()
d = defaultdict(int)
for i in a:
    d[i]+=1
if k < max(d.values()):
    print('NO')
else:
    print('YES')
    z = defaultdict(set)
    ans = []
    for i in range(1, k+1):
        z[i].add(a[i-1])
        ans.append(i)
    for i in range(k, n):
        for j in range(1, k+1):
            if a[i] not in z[j]:
                z[j].add(a[i])
                ans.append(j)
                break
    print(*ans)