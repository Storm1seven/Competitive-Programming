dp = [19, 28, 37, 46, 55, 64, 73, 82, 91]
i = 0
while i < 10002:
    next_num = dp[i]//10 * 100 + dp[i]%10
    while True:
        dp.append(next_num)
        next_num+=9
        if next_num > dp[i]*10:
            break
    i+=1
 n = int(input())
print(dp[n-1])