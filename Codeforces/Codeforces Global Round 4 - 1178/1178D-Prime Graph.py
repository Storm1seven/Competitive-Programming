import bisect
def SieveOfEratosthenes(n): 
    prime = [True for i in range(n+1)] 
    p = 2
    while (p * p <= n): 
        if (prime[p] == True): 
            for i in range(p * p, n+1, p): 
                prime[i] = False
        p += 1 
    ans = []
    for i in range(n+1):
        if prime[i]:
            ans.append(i)
    return ans
n = int(input())
prime = SieveOfEratosthenes(1009)
if n in prime:
    print(n)
    for i in range(1, n):
        print(i, i+1)
    print(n, 1)
else:
    j = bisect.bisect_left(prime, n)
    print(prime[j])
    for i in range(1, n):
        print(i, i+1)
    print(n, 1)
    for i in range(1, prime[j] - n+1):
        print(i, n-i)