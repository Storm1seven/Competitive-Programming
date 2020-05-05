import math, collections, sys, random
input = sys.stdin.readline
def solve():
    n = int(input())
    a = list(map(int, input().split()))
    a.sort(reverse = True)
    print(*a)
for _ in range(int(input())):
    solve()