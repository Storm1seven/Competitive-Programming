import math
from collections import deque, defaultdict
from sys import stdin, stdout
input = stdin.readline
# print = stdout.write
listin = lambda : list(map(int, input().split()))
mapin = lambda : map(int, input().split())
for _ in range(int(input())):
    n = int(input())
    a = listin()
    a.sort()
    i = 0
    while len(a) != len(set(a)) and 2048 not in a and i < n-1:
        a.sort()
        if a[i] == a[i+1]:
            a[i]*=2
            del(a[i+1])
        else:
            i+=1
    if 2048 in a:
        print("YES")
    else:
        print("NO")