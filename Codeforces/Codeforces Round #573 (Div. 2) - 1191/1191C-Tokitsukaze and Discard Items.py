import math
from collections import deque, defaultdict
from sys import stdin, stdout
input = stdin.readline
# print = stdout.write
listin = lambda : list(map(int, input().split()))
mapin = lambda : map(int, input().split())
n, m, k = mapin()
a = listin()
for i in range(m):
    a[i]-=1
p = 0
l = 0
step = 0
while p!=m:
    q = p
    while (a[q]-l)//k == (a[p]-l)//k:
        q+=1
        if q == m:
            break
    l+=(q-p)
    p+=(q-p)
    step+=1
print(step)