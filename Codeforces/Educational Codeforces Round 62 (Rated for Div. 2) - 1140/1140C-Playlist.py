import heapq
from sys import stdin, stdout
input = stdin.readline
n, k = map(int, input().split())
a = []
for _ in range(n):
    t, b = map(int, input().split())
    a.append((b, t))
a.sort(reverse = True)
q = []
ans = 0
s = 0
for i in a:
    s+=i[1]
    heapq.heappush(q, i[1])
    if len(q)>k:
        s-=heapq.heappop(q)
    ans = max(ans, s*i[0])
print(ans)