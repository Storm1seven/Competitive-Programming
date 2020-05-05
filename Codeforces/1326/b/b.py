import math, collections, sys
input = sys.stdin.readline
n = int(input())
b = list(map(int, input().split()))
a = [b[0]]
x = 0
for i in range(1, n):
    x = max(x, a[-1])
    a.append(b[i]+x)
print(*a)