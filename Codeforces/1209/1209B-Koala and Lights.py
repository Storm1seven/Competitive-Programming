import math
from collections import deque, defaultdict
from sys import stdin, stdout
input = stdin.readline
# print = stdout.write
listin = lambda : list(map(int, input().split()))
mapin = lambda : map(int, input().split())
n = int(input())
s = input()
ans = [0 for i in range(5000)]
for i in range(n):
    curr = int(s[i])
    a, b = mapin()
    for j in range(5000):
        if j < b:
            ans[j]+=curr
        else:
            curr^=1
            ans[j]+=curr
            b+=a
print(max(ans))