import math
from collections import deque, defaultdict
from sys import stdin, stdout
input = stdin.readline
# print = stdout.write
listin = lambda : list(map(int, input().split()))
mapin = lambda : map(int, input().split())
n, m = mapin()
x = listin()
p = listin()
z = []
for i in range(1, n):
    z.append(x[i] - x[i-1])
key = z[0]
for i in z:
    key = math.gcd(key, i)
index = 0
for i in range(m):
    if key%p[i] == 0:
        index = i+1
        break
if index:
    print("YES")
    print(x[0], index)
else:
    print("NO")