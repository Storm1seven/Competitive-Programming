import math
from collections import deque, defaultdict
from sys import stdin, stdout
input = stdin.readline
# print = stdout.write
listin = lambda : list(map(int, input().split()))
mapin = lambda : map(int, input().split())
n = int(input())
a = list((map(int, input().split())))
a.sort()
if a[-1] < a[n-2]+a[0]:
    print("YES")
    print(*a)
else:
    temp = a[-1]
    a[-1] = a[-2]
    a[-2] = temp
    if a[-1] < a[n-2]+a[0] and a[-2] < a[-3]+a[-1]:
        print("YES")
        print(*a)
    else:
        print("NO")