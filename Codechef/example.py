from collections import deque, defaultdict
def solve():
    n, m, x, y = map(int, input().split())
    x-=1
    y-=1
    grid = []
    for i in range(n):
        grid.append(list(map(int, input().split())))
    vis = [[0 for i in range(n)] for j in range(m)]
    q = deque([[0, 0, grid[0][0]]])
    while q:
        f = q.popleft()
        i, j, p = f[0], f[1], f[2]
        if i == x and j == y:
            print("Escape")
            return
        if i+1 < n:
            if grid[i+1][j] <= p:
                q.append([i+1, j, p - grid[i+1][j]])
        if j+1 < m:
            if grid[i][j+1] <= p:
                q.append([i, j+1, p - grid[i][j+1]])
        if i+1 < n and j+1 < m:
            if grid[i+1][j+1] <= p:
                q.append([i+1, j+1, p - grid[i+1][j+1]])
    print("Died")
for _ in range(int(input())):
    solve()