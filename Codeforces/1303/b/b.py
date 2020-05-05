import math, collections, sys
input = sys.stdin.readline
def case():
    n, g, b = map(int, input().split())
    req = (n+1)//2
    gc = (req//g)
    if req%g:
        days = gc*(b+g)
        days+=req%g
        rem = n-days
        days+=max(rem, 0)
    else:
        days = gc*g + (gc-1)*b
        rem = n-days
        days+=max(rem, 0)
    print(days)
for _ in range(int(input())):
    case()