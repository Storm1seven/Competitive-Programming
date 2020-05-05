import math, collections, sys
input = sys.stdin.readline
n, m = map(int, input().split())
a = list(map(int, input().split()))
d = collections.defaultdict(int)
for i in range(n):
    d[a[i]%m]+=1
for i in d.items():
    if i[1] > 1:
        print(0)
        exit()
ans = 1
for i in range(n):
    for j in range(i+1, n):
        ans*=abs(a[i]-a[j])
        ans%=m
print(ans)