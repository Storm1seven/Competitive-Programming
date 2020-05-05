from collections import defaultdict, deque
def bfs(v):
    q = deque([v])
    vis = [0 for i in range(n)]
    vis[v] = 1
    dist = [-1 for i in range(n)]
    dist[v] = 0
    while q:
        f = q.popleft()
        for i in d[f]:
            if not vis[i]:
                q.append(i)
                vis[i] = 1
                dist[i] = dist[f]+1
    return dist
for _ in range(int(input())):
    n = int(input())
    d = defaultdict(list)
    for i in range(n-1):
        x, y = map(int, input().split())
        d[x-1].append(y-1)
        d[y-1].append(x-1)
    valid = list(map(int, input().split()))
    dist = [[] for i in range(n)]
    for i in range(n):
        dist[i] = bfs(i)
    count = 0
    for i in range(n):
        for j in range(i+1, n):
            for k in range(j+1, n):
                if dist[i][j] == dist[i][k] and dist[i][k] == dist[j][k] and valid[i]==1 and valid[j]==1 and valid[k]==1:
                    count+=6
    print(count)