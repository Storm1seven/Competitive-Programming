import math, collections, sys
input = sys.stdin.readline
def case():
    n = int(input())
    a = list(map(int, input().split()))
    count = 0
    for i in range(n):
        if a[i] == 0:
            a[i]+=1
            count+=1
    if sum(a) == 0:
        count+=1
    print(count)
for _ in range(int(input())):
    case()