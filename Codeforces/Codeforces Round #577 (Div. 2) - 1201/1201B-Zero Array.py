import math
from collections import deque, defaultdict
from sys import stdin, stdout
input = stdin.readline
# print = stdout.write
listin = lambda : list(map(int, input().split()))
mapin = lambda : map(int, input().split())
n = int(input())
a = listin()
s = sum(a)
if s%2:
    print("NO")
else:
    for i in a:
        if i > s//2:
            print("NO")
            exit()
    print("YES")