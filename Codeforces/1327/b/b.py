import math, collections, sys
input = sys.stdin.readline
def solve():
    n = int(input())
    a = []
    vis1 = [0 for i in range(n)]
    vis2 = [0 for i in range(n+1)]
    for i in range(n):
        a.append(list(map(int, input().split()))[1:])
        for j in a[i]:
            if not vis2[j]:
                vis2[j] = 1
                vis1[i] = 1
                break
    for i in range(n):
        if not vis1[i]:
            print("IMPROVE")
            for j in range(1, n+1):
                if not vis2[j]:
                    print(i+1, j)
                    return
    print("OPTIMAL")
for _ in range(int(input())):
    solve()
