def factors(n) : 
    i = 1
    z = []
    while i <= int(n**0.5)+1: 
        if (n % i == 0) :
            if (n // i == i) : 
                z.append(i)
            else : 
                z.append(i)
                z.append(n//i)
        i = i + 1
    return z
def sumOfFirstN(n):
    return (n*(n+1))//2
def case():
    n, k = map(int, input().split())
    z = factors(n)
    z.sort()
    if sumOfFirstN(k) > n:
        print(-1)
        return
    ans = 1
    for gcd in z:
        if n - gcd*(sumOfFirstN(k)) < 0:
            break
        if (n - gcd*(sumOfFirstN(k)))%gcd == 0:
            ans = max(ans, gcd)
    print(ans)
for _ in range(int(input())):
    case()