import math, collections, sys
input = sys.stdin.readline
def case():
    n, temp = map(int, input().split())
    cr = [temp, temp]
    ct = 0
    z = []
    for _ in range(n):
        z.append(map(int, input().split()))
    for _ in range(n):
        t, l, h = z[_]
        cr = [cr[0]-(t-ct), cr[1]+(t-ct)]
        ct = t
        cr = [max(cr[0], l), min(cr[1], h)]
        if cr[0] > cr[1]:
            print("NO")
            return
    print("YES")
for _ in range(int(input())):
    case()