from collections import defaultdict, deque
from sys import stdin
input = stdin.readline
n, m = map(int, input().split())
g = defaultdict(list)
counter = [0]*(n+1)
for _ in range(m):
    a, b = map(int, input().split())
    g[a].append(b)
    g[b].append(a)
    counter[a]+=1
    counter[b]+=1
source = counter.index(max(counter))
visited = [False]*(n+1)
visited[source] = True
q = deque([source])
ans = []
while q:
    first = q.popleft()
    for i in g[first]:
        if not visited[i]:
            visited[i] = True
            q.append(i)
            ans.append((i, first))
for i in ans:
    print(*i)