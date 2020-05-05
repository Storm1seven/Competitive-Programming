import math, collections, sys
input = sys.stdin.readline
primes = [2, 3, 5, 7, 11, 13, 17, 19, 23, 27, 29, 31]
def solve():
    n = int(input())
    a = list(map(int, input().split()))
    spf = []
    for i in a:
        for j in primes:
            if i%j == 0:
                spf.append(j)
                break
    s = set(spf)
    color = 1
    d = collections.defaultdict(int)
    for i in s:
        d[i] = color
        color+=1
    print(color-1)
    for i in range(n):
        spf[i] = d[spf[i]]
    print(*spf)
for _ in range(int(input())):
    solve()