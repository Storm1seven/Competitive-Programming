import math, collections, sys
input = sys.stdin.readline
def solve():
    n, m = map(int, input().split())
    a = list(map(int, input().split()))
    b = set(map(int, input().split()))
    while True:
        for i in range(n):
            if i+1 in b and a[i] > a[i+1]:
                a[i], a[i+1] 
for _ in range(int(input())):
    solve()