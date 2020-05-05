import math, collections, sys
input = sys.stdin.readline
def solve():
    n, k = map(int, input().split())
    if n%2 != k%2:
        print("NO")
        return
    if k <= n**0.5:
        print("YES")
    else:
        print("NO")
for _ in range(int(input())):
    solve()