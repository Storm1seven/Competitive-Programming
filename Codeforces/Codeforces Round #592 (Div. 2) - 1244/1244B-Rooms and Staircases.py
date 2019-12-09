import math
from collections import deque, defaultdict
from sys import stdin, stdout
#input = stdin.readline
# print = stdout.write
listin = lambda : list(map(int, input().split()))
mapin = lambda : map(int, input().split())
intin = lambda : int(input())
for _ in range(intin()):
    n = intin()
    s = input()
    f = -1
    l = -1
    for i in range(n):
        if s[i] == "1":
            if f == -1:
                f = i
            l = i
    if f == l == -1:
        print(n)
    else:
        f = n-f
        l = l+1
        print(max(n, f*2, l*2))