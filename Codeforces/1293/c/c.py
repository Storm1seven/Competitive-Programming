import math, collections, sys
input = sys.stdin.readline
n, q = map(int, input().split())
a = [[0 for i in range(n+2)] for j in range(2)]
block = 0
for i in range(q):
    h, v = map(int, input().split())
    h-=1
    flag1, flag2, flag3 = False, False, False
    if a[h][v] and a[h^1][v]:
        flag1 = True
    if a[h][v] and a[h^1][v-1]:
        flag2 = True
    if a[h][v] and a[h^1][v+1]:
        flag3 = True
    a[h][v]^=1
    if a[h][v] and a[h^1][v] and not flag1:
        block+=1
    elif not(a[h][v] and a[h^1][v]) and flag1:
        block-=1
    if a[h][v] and a[h^1][v-1] and not flag2:
        block+=1
    elif not(a[h][v] and a[h^1][v-1]) and flag2:
        block-=1
    if a[h][v] and a[h^1][v+1] and not flag3:
        block+=1
    elif not(a[h][v] and a[h^1][v+1]) and flag3:
        block-=1
    if block == 0:
        print("Yes")
    else:
        print("No")