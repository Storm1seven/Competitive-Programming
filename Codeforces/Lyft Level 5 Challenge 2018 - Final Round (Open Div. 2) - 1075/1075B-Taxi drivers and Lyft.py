import math
from collections import deque, defaultdict
from sys import stdin, stdout
input = stdin.readline
# print = stdout.write
listin = lambda : list(map(int, input().split()))
mapin = lambda : map(int, input().split())
n, m = mapin()
x = listin()
t = listin()
pas = []
driv = []
for i in range(n+m):
    if t[i]:
        driv.append(x[i])
    else:
        pas.append(x[i])
j = 0
count = [0]*m
for i in pas:
    while j < m-1:
        if i - driv[j] > driv[j+1] - i:
            j+=1
        else:
            break
    count[j]+=1
print(*count)