import math, collections, sys
input = sys.stdin.readline
def solve():
    n = int(input())
    z = []
    for i in range(n):
        z.append(list(map(int, input().split())))
    start, end = [], []
    for i in z:
        start.append(i[0])
        end.append(i[1])
    l = min(end)
    r = max(start)
    print(max(r-l, 0))
for _ in range(int(input())):
    solve()