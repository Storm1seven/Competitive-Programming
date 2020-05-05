import math, collections, sys
input = sys.stdin.readline
factors = set()
def Divisors(n): 
    i = 1
    while i <= math.sqrt(n):
        if (n % i == 0):
            if i <= 40000 and n//i <= 40000:
                factors.add(i)
                factors.add(n//i)
        i+=1
n, m, k = map(int, input().split())
Divisors(k)
a = list(map(int, input().split()))
b = list(map(int, input().split()))
countA = collections.defaultdict(int)
countB = collections.defaultdict(int)
za, zb = [0], [0]
for i in a:
    za.append(za[-1]+i)
for i in b:
    zb.append(zb[-1]+i)
for i in factors:
    for j in range(n-i+1):
        if za[j+i] - za[j] == i:
            countA[i]+=1
    for j in range(m-i+1):
        if zb[j+i] - zb[j] == i:
            countB[i]+=1
ans = 0
for i in factors:
    ans+=countA[i]*countB[k//i]
print(ans)