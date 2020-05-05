import math, collections, sys
input = sys.stdin.readline
def primeFactors(a):
    p = set([])
    while a:
        if a%2:
            break
        p.add(2)
        a//=2
    for i in range(3, int(a**0.5)+2, 2):
        while a:
            if a%i:
                break
            p.add(i)
            a//=i
    if a > 1:
        p.add(a)
    return p
n = int(input())
x = list(primeFactors(n))
if len(x) == 1:
    print(x[0])
else:
    print(1)