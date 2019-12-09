listin = lambda : list(map(int, input().split()))
mapin = lambda : map(int, input().split())
n, l = mapin()
c = listin()
lc = [c[0]]
for i in range(1, n):
    lc.append(min(lc[-1]*2, c[i]))
ans = 10**20
s = 0
for i in range(n-1, -1, -1):
    num = l//(2**i)
    s+=num*lc[i]
    l-=num*(2**i)
    ans = min(ans, s+(l > 0)*lc[i])
print(ans)