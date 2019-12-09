n, m = map(int, input().split())
mod = 10**9+7
a = []
a.append(0)
a.append(2)
a.append(4)
for i in range(3, max(n, m)+1):
    a.append((a[i-1]+a[i-2])%mod)
print((a[m]-2 + a[n])%mod)