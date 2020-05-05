import math, collections, sys
input = sys.stdin.readline
def case():
    n, m = map(int, input().split())
    numZ = n-m
    div = numZ//(m+1)
    rem = numZ%(m+1)
    ans = (rem*((div+1)*(div+2)))//2 + ((m+1-rem)*(div)*(div+1))//2
    total = (n*(n+1))//2
    print(total - ans)
for _ in range(int(input())):
    case()