from sys import stdin, stdout
input = stdin.readline
listin = lambda : list(map(int, input().split()))
mapin = lambda : map(int, input().split())
n, m, k = mapin()
a = listin()
b = []
for i in range(1, n):
    b.append(a[i]-a[i-1])
b.sort()
ans = n
i = 0
while n>k:
    ans+=b[i]-1
    i+=1
    n-=1
print(ans)