import math
from bisect import insort
from collections import deque, defaultdict
from sys import stdin, stdout
input = stdin.readline
# print = stdout.write
listin = lambda : list(map(int, input().split()))
mapin = lambda : map(int, input().split())
n, h = mapin()
a = listin()
s = []
for i in a:
    insort(s, i)
    if sum(s[n-1::-2]) > h:
        print(len(s)-1)
        exit()
print(n)