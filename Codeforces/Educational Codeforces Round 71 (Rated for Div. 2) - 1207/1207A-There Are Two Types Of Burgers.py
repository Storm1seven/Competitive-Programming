import math
from collections import deque, defaultdict
from sys import stdin, stdout
input = stdin.readline
# print = stdout.write
listin = lambda : list(map(int, input().split()))
mapin = lambda : map(int, input().split())
for _ in range(int(input())):
    b, p, f = mapin()
    h, c = mapin()
    b//=2
    ans = 0
    if (h > c):
        ans+=h*min(b, p)
        b-=min(b, p)
        ans+=c*min(b, f)
        b-=min(b, f)
    else:
        ans+=c*min(b, f)
        b-=min(b, f)
        ans+=h*min(b, p)
        b-=min(b, p)
    print(ans)
    