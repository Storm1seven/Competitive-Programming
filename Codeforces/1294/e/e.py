import math, collections, sys
input = sys.stdin.readline
n, m = map(int, input().split())
a = []
for i in range(n):
    a.append(list(map(int, input().split())))
z = [[n for i in range(m)] for i in range(n)]
for j in range(m):
    for i in range(n):
        num = a[i][j]
        if num > (n-1)*m+j+1 or num%m != (j+1)%m:
            continue
        num-=j+1
        row = num//m
        shift = ((i-row)+n)%n
        z[shift][j]-=1
ans = 0
for j in range(m):
    m = 2*10**6
    for i in range(n):
        m = min(m, z[i][j]+i)
    ans+=m
print(ans)