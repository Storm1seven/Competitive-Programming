h, w = map(int, input().split())
r = list(map(int, input().split()))
c = list(map(int, input().split()))
grid = [[0 for i in range(w)] for i in range(h)]
flag = 1
for i in range(w):
    for j in range(c[i]):
        grid[j][i] = 1
    if c[i] < h:
        grid[c[i]][i] = 2
for i in range(h):
    for j in range(r[i]):
        if grid[i][j] == 2:
            flag = 0
        grid[i][j] = 1
    if r[i] < w:
        if grid[i][r[i]] == 1:
            flag = 0
        grid[i][r[i]] = 2
c = 0
if flag:
    for i in grid:
        c+=i.count(0)
    print(pow(2, c, 1000000007))
else:
    print(0)