import math, collections, sys
input = sys.stdin.readline
for _ in range(int(input())):
    n, s, k = map(int, input().split())
    a = set(map(int, input().split()))
    delta = 0
    while True:
        if s-delta >= 1 and s-delta not in a:
            print(delta)
            break
        elif s+delta <= n and s+delta not in a:
            print(delta)
            break
        delta+=1
