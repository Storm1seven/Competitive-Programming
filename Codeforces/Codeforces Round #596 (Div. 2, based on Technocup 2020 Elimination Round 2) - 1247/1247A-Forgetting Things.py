import math
from collections import deque, defaultdict
from sys import stdin, stdout
input = stdin.readline
# print = stdout.write
listin = lambda : list(map(int, input().split()))
mapin = lambda : map(int, input().split())
a, b = mapin()
if a+1 == b:
    print(a, b)
elif a == b:
    print(a*10, b*10+1)
elif a == 9 and b == 1:
    print(99, 100)
else:
    print(-1)