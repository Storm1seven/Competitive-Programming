import math, collections, sys
input = sys.stdin.readline
def case():
    n, d = map(int, input().split())
    a = list(map(int, input().split()))
    for i in range(1, n):
        while a[i]:
            if d >= i:
                a[i]-=1
                a[0]+=1
                d-=i
            else:
                break
    print(a[0])
for _ in range(int(input())):
    case()