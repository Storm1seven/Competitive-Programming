import math, collections, sys
input = sys.stdin.readline
def case():
    n, x = map(int, input().split())
    a = list(map(int, input().split()))
    d = set(a)
    a.sort(reverse = True)
    ans = 10**20
    for i in a:
        s = x//i
        rem = x%i
        if rem == 0:
            ans = min(ans, s)
        else:
            if s:
                ans = min(ans, s+1)
            else:
                ans = min(ans, 2)
    print(ans)
for _ in range(int(input())):
    case()