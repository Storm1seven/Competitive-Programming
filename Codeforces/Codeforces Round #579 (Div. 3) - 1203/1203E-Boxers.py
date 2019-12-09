import math
from collections import deque, defaultdict
from sys import stdin, stdout
input = stdin.readline
# print = stdout.write
listin = lambda : list(map(int, input().split()))
mapin = lambda : map(int, input().split())
n = int(input())
s = set([])
a = listin()
a.sort()
for i in a:
    if i == 1:
        if i not in s:
            s.add(i)
        else:
            s.add(i+1)
    else:
        if i-1 not in s:
            s.add(i-1)
        elif i not in s:
            s.add(i)
        else:
            s.add(i+1)
print(len(s))