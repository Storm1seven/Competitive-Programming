import math, collections, sys
input = sys.stdin.readline
n, k = map(int, input().split())
a = list(map(int, input().split()))
val = (n*(n+1))//2 - ((n-k)*(n-k+1))//2
need = [0 for i in range(n)]
for i in range(n):
    if a[i] > n-k:
        need[i] = 1
gaps = [0]
for i in range(n):
    if need[i]:
        gaps.append(0)
    else:
        gaps[-1]+=1
ans = 1
mod = 998244353
for i in range(1, len(gaps)-1):
    ans*=(gaps[i]+1)
    ans%=mod
print(val, ans)