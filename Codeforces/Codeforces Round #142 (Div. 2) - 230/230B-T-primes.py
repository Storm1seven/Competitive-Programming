def Sieve(n): 
    prime = [True for i in range(n+1)] 
    p = 2
    while (p * p <= n): 
        if (prime[p] == True): 
            for i in range(p * p, n+1, p): 
                prime[i] = False
        p += 1
    prime[1] = False
    return prime
z = Sieve(1000000)
n = int(input())
a = list(map(int, input().split()))
for i in a:
 s = i**0.5
 if int(s) == s:
  if z[int(s)]:
   print('YES')
  else:
   print('NO')
 else:
  print('NO')