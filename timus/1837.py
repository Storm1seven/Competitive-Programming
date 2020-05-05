from collections import defaultdict, deque
n = int(input())
d = defaultdict(set)
dist = defaultdict(int)
for i in range(n):
    a, b, c = input().split()
    d[a].add(b)
    d[a].add(c)
    d[b].add(a)
    d[b].add(c)
    d[c].add(a)
    d[c].add(b)
    dist[a] = dist[b] = dist[c] = -1
if "Isenbaev" in dist:
    dist["Isenbaev"] = 0
    q = deque(["Isenbaev"])
    while q:
        f = q.popleft()
        for i in d[f]:
            if dist[i]==-1:
                dist[i] = dist[f]+1
                q.append(i)
z = [i for i in dist.items()]
z.sort()
for i in z:
    if i[1]!=-1:
        print(*i)
    else:
        print(i[0], "undefined")