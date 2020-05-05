import math, collections, sys
input = sys.stdin.readline
def case():
    n = int(input())
    a = list(map(int, input().split()))
    a.sort(reverse=True)
    count = 0
    for i in a:
        if i > count:
            count+=1
    print(count)
for _ in range(int(input())):
    case()