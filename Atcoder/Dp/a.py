n, k = map(int, input().split())
h = list(map(int, input().split()))
dp = [0 for i in range(n)]
for i in range(1, n):
    m = 10**10
    index = i-1
    num = k
    while index >= 0 and num:
        m = min(m, dp[index]+abs(h[index]-h[i]))
        index-=1
        num-=1
    dp[i] = m
print(dp[n-1])