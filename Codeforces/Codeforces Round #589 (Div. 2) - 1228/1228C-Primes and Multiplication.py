import math
from collections import deque, defaultdict
from sys import stdin, stdout
input = stdin.readline
# print = stdout.write
listin = lambda : list(map(int, input().split()))
mapin = lambda : map(int, input().split())
def primeFactors(n): 
    s = []
    count = 0
    while n % 2 == 0: 
        count+=1
        n //= 2
    if count:
        s.append(2)
    for i in range(3,int(math.sqrt(n))+1,2): 
        count = 0
        while n % i== 0: 
            count+=1
            n//=i
        if count:
            s.append(i) 
    if n > 2: 
        s.append(n)
    return s
x, n = mapin()
ans = 1
z = primeFactors(x)
for i in z:
    count = 0
    d = i
    while d <= n:
        count+=n//d
        d*=i
    if count:
        ans*=pow(i, count, 1000000007)
        ans%=1000000007
print(ans)