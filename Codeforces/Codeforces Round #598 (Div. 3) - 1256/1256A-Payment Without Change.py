import math
from collections import deque, defaultdict
from sys import stdin, stdout
input = stdin.readline
# print = stdout.write
listin = lambda : list(map(int, input().split()))
mapin = lambda : map(int, input().split())
for _ in range(int(input())):
    a, b, n, s = mapin()
    rem = s%n
    if rem > b:
        print("NO")
        continue
    b-=rem
    a+=b//n
    if s//n <= a:
        print("YES")
    else:
        print("NO")