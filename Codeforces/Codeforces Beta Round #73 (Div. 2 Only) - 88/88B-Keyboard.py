import math
from collections import deque, defaultdict
from sys import stdin, stdout
#input = stdin.readline
# print = stdout.write
listin = lambda : list(map(int, input().split()))
mapin = lambda : map(int, input().split())
n, m, x = mapin()
a = []
for i in range(n):
    a.append(input())
q = int(input())
s = input()
shift = []
for i in range(n):
    for j in range(m):
        if a[i][j] == 'S':
            shift.append((i, j))
d = {i:[] for i in 'abcdefghijklmnopqrstuvwxyz'}
for i in range(n):
    for j in range(m):
        if a[i][j]!='S':
            d[a[i][j]].append((i, j))
ans = {i:100 for i in 'abcdefghijklmnopqrstuvwxyz'}
for i in 'abcdefghijklmnopqrstuvwxyz':
    if d[i]:
        for j in d[i]:
            for k in shift:
                ans[i] = min(ans[i], ((j[0]-k[0])**2+(j[1]-k[1])**2)**0.5)
count = 0
flag = 0
for i in s:
    if i.isupper():
        if ans[i.lower()] > x:
            count+=1
        if shift == [] or d[i.lower()] == []:
            flag = 1
    else:
        if not d[i]:
            flag = 1
if flag:
    print(-1)
else:
    print(count)