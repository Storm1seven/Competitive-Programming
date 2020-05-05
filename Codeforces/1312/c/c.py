import math, collections, sys
input = sys.stdin.readline
def getBits(a, k):
    z = []
    while a:
        z.append(a%k)
        a//=k
    return z
def solve():
    n, k = map(int, input().split())
    a = list(map(int, input().split()))
    d = collections.defaultdict(int)
    for i in a:
        z = getBits(i, k)
        for j in range(len(z)):
            d[j]+=z[j]
    for i in d.values():
        if i > 1:
            print("NO")
            return
    print("YES")
for _ in range(int(input())):
    solve()