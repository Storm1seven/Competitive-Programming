import math, collections, sys
input = sys.stdin.readline
def case():
    x, y, a, b = map(int, input().split())
    z = (a*y+b*x)/(a+b)
    if z == int(z) and x <= z and z <= y:
        t = (z-x)/a
        if int(t) == t:
            print(int(t))
        else:
            print(-1)
    else:
        print(-1)
for _ in range(int(input())):
    case()