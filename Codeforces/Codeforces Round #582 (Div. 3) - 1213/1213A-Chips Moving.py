import math
from collections import deque, defaultdict
from sys import stdin, stdout
input = stdin.readline
# print = stdout.write
listin = lambda : list(map(int, input().split()))
mapin = lambda : map(int, input().split())
n = int(input())
a = listin()
oc, ec = 0, 0
for i in a:
    if i%2 == 0:
        ec+=1
    else:
        oc+=1
print(min(ec, oc))