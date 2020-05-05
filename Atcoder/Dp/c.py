n = int(input())
z = []
for i in range(n):
    z.append(list(map(int, input().split())))
dp = [[0, 0, 0] for i in range(n)]
dp[0][0] = z[0][0]
dp[0][1] = z[0][1]
dp[0][2] = z[0][2]
for i in range(1, n):
    for j in range(3):
        for k in range(3):
            if j == k:
                continue
            dp[i][j] = max(dp[i][j], dp[i-1][k]+z[i][j])
print(max(dp[n-1][0], dp[n-1][1], dp[n-1][2]))
