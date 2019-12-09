from collections import deque
for _ in range(int(input())):
    n, m = map(int, input().split())
    z = [[] for i in range(n*m+1)]
    a = []
    dc = [["." for i in range(m)] for i in range(n)]
    vis = set([n*m])
    for i in range(n):
        a.append(list(map(int, input().split())))
        for j in range(m):
            z[a[i][j]] = [i, j]
    last = n*m
    while len(vis) != n*m:
        vis.add(last)
        dc[z[last][0]][z[last][1]] = "1"
        q = deque([[z[last][0], z[last][1]]])
        while q:
            f = q.popleft()
            if f[0]+1 >= n:
                continue
            if f[1]-1 >= 0:
                if dc[f[0]+1][f[1]-1] == ".":
                    dc[f[0]+1][f[1]-1] = "0"
                    vis.add(a[f[0]+1][f[1]-1])
                    q.append([f[0]+1, f[1]-1])
            if f[1]+1 <= m-1:
                if dc[f[0]+1][f[1]+1] == ".":
                    dc[f[0]+1][f[1]+1] = "0"
                    vis.add(a[f[0]+1][f[1]+1])
                    q.append([f[0]+1, f[1]+1])
            if dc[f[0]+1][f[1]] == ".":
                dc[f[0]+1][f[1]] = "0"
                vis.add(a[f[0]+1][f[1]])
                q.append([f[0]+1, f[1]])
        while last in vis:
            last-=1
    for i in dc:
        print("".join(i))