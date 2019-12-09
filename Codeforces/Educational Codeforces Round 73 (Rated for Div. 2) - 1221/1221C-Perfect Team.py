import math
from collections import deque, defaultdict
from sys import stdin, stdout
input = stdin.readline
# print = stdout.write
listin = lambda : list(map(int, input().split()))
mapin = lambda : map(int, input().split())
for _ in range(int(input())):
    a, b, c = map(int, input().split())
    ans = min(a, b)
    c+=(a-ans)+(b-ans)
    if ans-c < 0:
        print(ans)
    else:
        ans-=math.ceil((ans-c)/3)
        print(ans)