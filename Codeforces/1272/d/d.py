import math, collections, sys
input = sys.stdin.readline
n = int(input())
a = list(map(int, input().split()))
r = [1 for i in range(n)]
l = [1 for i in range(n)]
for i in range(1, n):
    if a[i-1] < a[i]:
        l[i] = l[i-1]+1
for i in range(n-2, -1, -1):
    if a[i+1] > a[i]:
        r[i] = r[i+1]+1
ans = max(max(l), max(r))
for i in range(1, n-1):
    if a[i-1] < a[i+1]:
        ans = max(ans, r[i+1]+l[i-1])
print(ans)