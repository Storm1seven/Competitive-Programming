from collections import defaultdict
from sys import stdin
input = stdin.readline
n = int(input())
d = []
counter = defaultdict(int)
for i in range(n):
    d.append(list(map(int, input().split())))
for i in d:
    for j in range(1, i[0]+1):
        counter[i[j]]+=1
ans = 0
mod = 998244353
for i in d:
    part = 0
    for j in range(1, i[0]+1):
        part+=counter[i[j]]
    part*=pow(i[0], mod-2, mod)
    part%=mod
    ans+=part
    ans%=mod
div = pow(n**2, mod-2, mod)
ans*=div
ans%=mod
print(ans)