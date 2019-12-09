def SieveOfEratosthenes(n): 
          # Create a boolean array "prime[0..n]" and initialize 
    #  all entries it as true. A value in prime[i] will 
    # finally be false if i is Not a prime, else true. 
    prime = [0 for i in range(n+1)]
    prime[0] = 0
    prime[1] = 0
    p = 2
    current = 1
    while (p <= n):
                  # If prime[p] is not changed, then it is a prime 
        if (prime[p]==0): 
                          prime[p] = current 
            for i in range(p, n+1, p): 
                prime[i] = current
            current+=1
        p += 1
    return prime
n = int(input())
prime = SieveOfEratosthenes(n)
print(*prime[2:])