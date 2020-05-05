import math, collections, sys
input = sys.stdin.readline
def solve():
    a, b, x, y = map(int, input().split())
    print(max(x*b, (a-1-x)*b, y*a, (b-1-y)*a))
for _ in range(int(input())):
    solve()