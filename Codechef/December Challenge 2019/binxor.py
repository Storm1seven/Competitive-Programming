fact = [1]
mod = 10**9+7
for i in range(1, 10**5+1):
    fact.append((fact[-1]*i)%mod)
def ncr(n, r, p): 
    num = fact[n]
    den1 = fact[n-r]
    den2 = fact[r]
    return (num*(pow(den1, p-2, p)%p)*(pow(den2, p-2, p)%p))%p
for _ in range(int(input())):
    n = int(input())
    a = input()
    b = input()
    x = a.count('1')
    y = b.count('1')
    if x+y <= n:
        upper = x+y
    else:
        upper = 2*n - x - y
    lower = abs(x-y)
    ans = 0
    for i in range(lower, upper+1, 2):
        ans+=ncr(n, i, mod)
        ans%=mod
    print(ans)