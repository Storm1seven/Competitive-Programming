import math
from collections import deque, defaultdict
from sys import stdin, stdout
input = stdin.readline
# print = stdout.write
listin = lambda : list(map(int, input().split()))
mapin = lambda : map(int, input().split())
for _ in range(int(input())):
    a, b, n = mapin()
    if n%3 == 2:
        print(a^b)
    elif n%3 == 0:
        print(a)
    else:
        print(b) 