import math, collections, sys
input = sys.stdin.readline
def solve():
    a, b = map(int, input().split())
    if a < b:
        if (b-a)%2:
            print(1)
        else:
            print(2)
    elif a > b:
        if not (a-b)%2:
            print(1)
        else:
            print(2)
    else:
        print(0)
for _ in range(int(input())):
    solve()