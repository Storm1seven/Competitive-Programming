import math, collections, sys
input = sys.stdin.readline
def solve():
    n, m = map(int, input().split())
    a = list(map(int, input().split()))
    i = 1
    while a[0] < m and i < n:
        if a[i] < m-a[0]:
            a[0]+=a[i]
            a[i] = 0
        else:
            a[0]+=(m-a[0])
            a[i]-=(m-a[0])
        i+=1
    print(a[0])
for _ in range(int(input())):
    solve()