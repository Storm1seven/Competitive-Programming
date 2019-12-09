from sys import stdin
input = stdin.readline
listin = lambda : list(map(int, input().split()))
mapin = lambda : map(int, input().split())
n, m, k = mapin()
a = listin()
a.sort()
ans = 0
bit = k*a[-1]+a[-2]
ans+=bit*(m//(k+1))
ans+=a[-1]*(m%(k+1))
print(ans)