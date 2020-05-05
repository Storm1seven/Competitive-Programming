import math, collections, sys
input = sys.stdin.readline
def totient(x):
    result = x
    p = 2
    while(p * p<= x):
        if (x % p == 0):
            while (x % p == 0):
                x = x // p 
            result = result * (1.0 - (1.0 / float(p))) 
        p = p + 1
    if (x > 1):
        result = result * (1.0 - (1.0 / float(x))) 
    return int(result)
for _ in range(int(input())):
    a, m = map(int, input().split())
    g = math.gcd(a, m)
    print(totient(m//g))