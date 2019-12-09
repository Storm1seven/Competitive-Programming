import math
from collections import deque, defaultdict
from sys import stdin, stdout
input = stdin.readline
# print = stdout.write
listin = lambda : list(map(int, input().split()))
mapin = lambda : map(int, input().split())
n = int(input())
a = list(map(int, input().split()))
z = [0]
for i in range(n):
    z.append(a[i]+z[-1])
for _ in range(int(input())):
    l, r = mapin()
    print((z[r] - z[l-1])//10)