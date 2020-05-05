h, w = map(int, input().split())
grid = []
for i in range(h):
    grid.append(input())
dp = [[-1 for i in range(w)] for i in range(h)]
for i in range(w):
    if grid[0][i]!='#':
        dp[0][i] = 1
    else:
        break
for i in range(h):
    if grid[i][0]!='#':
        dp[i][0] = 1
    else:
        break
mod = 10**9+7
for i in range(1, h):
    for j in range(1, w):
        if grid[i][j] == '#':
            continue
        if dp[i][j-1] == -1 and dp[i-1][j] == -1:
            continue
        elif dp[i-1][j] == -1:
            dp[i][j] = dp[i][j-1]
        elif dp[i][j-1] == -1:
            dp[i][j] = dp[i-1][j]
        else:
            dp[i][j] = (dp[i-1][j]+dp[i][j-1])%mod
print(max(dp[h-1][w-1], 0))