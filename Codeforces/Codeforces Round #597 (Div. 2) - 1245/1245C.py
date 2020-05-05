s = input()
n = len(s)
mod = 10**9+7
dp = [0 for i in range(n+1)]
dp[0] = 1
dp[1] = 1
for i in range(2, n+1):
    dp[i] = dp[i-1]
    if s[i-2] == s[i-1] and (s[i-1] == 'n' or s[i-1] == 'u'):
        dp[i] += dp[i-2]
    dp[i]%=mod
if 'm' not in s and 'w' not in s:
    print(dp[n])
else:
    print(0)