from collections import defaultdict
import random
for _ in range(int(input())):
    n, m, k = map(int, input().split())
    if m == 2:
        ans = []
        dp = [[[0 for i in range(k)], [0 for i in range(k)]] for i in range(n)]
        for i in range(n):
            x = list(map(int, input().split()))
            for j in range(k):
                if x[i] == 1:
                    dp[i][0][j]+=1
                else:
                    dp[i][1][j]+=1
            if i != 0:
                l1 = [0 for i in range(k)]
                l2 = [0 for i in range(k)]
                r1 = [0 for i in range(k)]
                r2 = [0 for i in range(k)]
                for j in range(k):
                    l1[i] = dp[i-1][0][j]+dp[i][0][j]
                    l2[i] =dp[i-1][1][j]+dp[i][0][j]
                    r1[i] =dp[i-1][0][j]+dp[i][1][j]
                    r2[i] =dp[i-1][1][j]+dp[i][1][j]
                if min(l1) < min(l2):
                    dp[i][0] = [i for i in l2]
                elif min(l2) <= min(l1):
                    dp[i][0] = [i for i in l1]
                if min(r1) < min(r2):
                    dp[i][1] = [i for i in r2]
                elif min(r2) <= min(r1):
                    dp[i][1] = [i for i in r1]
            if min(dp[i][0]) < min(dp[i][1]):
                ans.append(2)
            else:
                ans.append(1)
        print(*ans)
    else:
        ans = []
        for i in range(n):
            a = list(map(int, input().split()))
            ans.append(random.choice(a))
        print(*ans)