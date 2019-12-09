import math
from collections import deque, defaultdict
from sys import stdin, stdout
input = stdin.readline
# print = stdout.write
listin = lambda : list(map(int, input().split()))
mapin = lambda : map(int, input().split())
def check(a):
    if len(a) == 1:
        return True
    d = a[1] - a[0]
    for i in range(1, len(a)):
        if a[i] - a[i-1] != d:
            return False
    return True
n = int(input())
a = listin()
z = [i for i in a]
a.sort()
if check(a) or check(a[1:]):
    print(z.index(a[0])+1)
    exit()
elif check([a[0]]+a[2:]):
    print(z.index(a[1])+1)
    exit()
d = a[1] - a[0]
k = 0
for i in range(n-1):
    if a[i+1]-a[i] != d:
        k = i+1
        break
if check(a[:k]+a[k+1:]):
    print(z.index(a[k])+1)
else:
    print(-1)