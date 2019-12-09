import math
from collections import deque, defaultdict
from sys import stdin, stdout
input = stdin.readline
# print = stdout.write
listin = lambda : list(map(int, input().split()))
mapin = lambda : map(int, input().split())
n = int(input())
a = list(map(int, input().split()))
z = []
q = deque([a])
while q:
    first = q.popleft()
    z.append(first)
    if first[:len(first)//2] not in z:
        q.append(first[:len(first)//2])
        z.append(first[:len(first)//2])
    if first[len(first)//2:] not in z:
        q.append(first[len(first)//2:])
        z.append(first[len(first)//2:])
m = 0
for i in z:
    if i == sorted(i):
        m = max(m, len(i))
print(m)