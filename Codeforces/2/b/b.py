import math, collections, sys
input = sys.stdin.readline
def contrib(a):
    n2, n5 = 0, 0
    if a == 0:
        return [1, 1, 0]
    while a%2 == 0:
        n2+=1
        a//=2
    while a%5 == 0:
        n5+=1
        a//=5
    return [n2, n5, 1]
n = int(input())
z = []
for i in range(n):
    z.append(list(map(int, input().split())))
for i in range(n):
    for j in range(n):
        z[i][j] = contrib(z[i][j])
ans = ''
dp = [[[0, 0, 'X', 1] for i in range(n)] for i in range(n)]
dp[0][0][0] = z[0][0][0]
dp[0][0][1] = z[0][0][1]
dp[0][0][3] = z[0][0][2]
for i in range(1, n):
    if not dp[0][i-1][3]:
        dp[0][i] = [1, 1, 'j', 0]
        continue
    dp[0][i] = [dp[0][i-1][0]+z[0][i][0], dp[0][i-1][1]+z[0][i][1], 'j', dp[0][i-1][3]]
for i in range(1, n):
    if not dp[0][i][2]:
        dp[i][0] = [1, 1, 'i', 0]
        continue
    dp[i][0] = [dp[i-1][0][0]+z[i][0][0], dp[i-1][0][1]+z[i][0][1], 'i', dp[i-1][0][3]]
for i in range(1, n):
    for j in range(1, n):
        if not z[i][j][2]:
            dp[i][j] = [1, 1, 'j', 0]
            continue
        fl2, fl5 = dp[i][j-1][0] + z[i][j][0], dp[i][j-1][1] + z[i][j][1]
        fu2, fu5 = dp[i-1][j][0] + z[i][j][0], dp[i-1][j][1] + z[i][j][1]
        if min(fl2, fl5) < min(fu2, fu5):
            dp[i][j] = ['j', ]
        else:
            dp[i][j]