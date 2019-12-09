import math
from collections import deque, defaultdict
from sys import stdin, stdout
input = stdin.readline
# print = stdout.write
listin = lambda : list(map(int, input().split()))
mapin = lambda : map(int, input().split())
b = int(input())
g = int(input())
n = int(input())
x = [0 for i in range(n+1)]
for i in range(n+1):
    if i > b or n-i > g:
        x[i] = 1
print(x.count(0))