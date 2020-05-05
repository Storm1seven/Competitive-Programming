import math
from collections import defaultdict
import sys
input = sys.stdin.readline
MAXN = 100001
spf = [0 for i in range(MAXN)]
sqFactors = [[] for i in range(MAXN)]
def sieve():
    spf[1] = 1
    for i in range(2, MAXN):
        spf[i] = i
    for i in range(4, MAXN, 2):
        spf[i] = 2
    for i in range(3, math.ceil(math.sqrt(MAXN))):
        if (spf[i] == i):
            for j in range(i * i, MAXN, i):
                if (spf[j] == j):
                    spf[j] = i
def update(counter, pf, p, carry, pos):
    if (carry == 0 or pos==-1):
        return
    counter[pos]+=1
    carry = counter[pos]//pf[p[pos]]
    counter[pos]%=(pf[p[pos]]+1)
    update(counter, pf, p, carry, pos-1)
def getFactorization(x):
    pf = defaultdict(int)
    n = x
    if x == 1:
        pf[1] = 1
    while (x != 1): 
        pf[spf[x]]+=2
        x = x // spf[x]
    p = []
    total = 1
    for i in pf.items():
        p.append(i[0])
        total*=(i[1]+1)
    counter = [0 for i in range(len(pf))]
    f = set()
    for i in range(total):
        num1 = 1
        for j in range(len(pf)):
            num1*=p[j]**counter[j]
        num2 = n**2//num1
        if num1 < MAXN and num2 < MAXN:
            f.add((num1, num2))
        update(counter, pf, p, 1, len(pf)-1)
    return list(f)
sieve()
for i in range(1, MAXN):
    sqFactors[i] = getFactorization(i)
print(sqFactors[100])
def case():
    n, m = map(int, input().split())
    x = list(map(int, input().split()))
    y = list(map(int, input().split()))
    visXN = [0 for i in range(MAXN)]
    visYN = [0 for i in range(MAXN)]
    visXP = [0 for i in range(MAXN)] 
    visYP = [0 for i in range(MAXN)]
    zeroX, zeroY = 0, 0
    for i in x:
        if not i:
            zeroX = 1
            continue
        if i < 0:
            visXN[abs(i)] = 1
        elif i > 0:
            visXP[i] = 1
    for i in y:
        if not i:
            zeroY = 1
            continue
        if i < 0:
            visYN[abs(i)] = 1
        elif i > 0:
            visYP[i] = 1
    ans = zeroX*(n-1)*m + zeroY*n*(m-1)
    for i in x:
        val = abs(i)
        if not val:
            continue
        for j in sqFactors[val]:
            if visYN[j[0]] and visYP[j[1]]:
                ans+=1
    for i in y:
        val = abs(i)
        if not val:
            continue
        for j in sqFactors[val]:
            if visXN[j[0]] and visXP[j[1]]:
                ans+=1
    print(ans)
for _ in range(int(input())):
    case()