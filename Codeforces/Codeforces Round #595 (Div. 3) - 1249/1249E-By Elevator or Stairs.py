import math
from collections import deque, defaultdict
from sys import stdin, stdout
input = stdin.readline
# print = stdout.write
listin = lambda : list(map(int, input().split()))
mapin = lambda : map(int, input().split())
n, c = mapin()
a = listin()
b = listin()
dp = [[0 for i in range(n)] for j in range(2)]
dp[1][0] = c
for i in range(n-1):
    dp[0][i+1] = min(dp[0][i], dp[1][i])+a[i]
    dp[1][i+1] = min(dp[0][i]+c, dp[1][i])+b[i]
for i in range(n):
    print(min(dp[0][i], dp[1][i]), end = " ")