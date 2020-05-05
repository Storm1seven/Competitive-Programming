import math, sys
from collections import defaultdict
input = sys.stdin.readline
n = int(input())
s = input().strip()
color = [1 for i in range(n)]
d = defaultdict(int)
for i in 'abcdefghijklmnopqrst':
    d[i] = 0
for i in range(n):
    c = 0
    for j in range(1, 26):
        if ord(s[i])+j > ord('z'):
            break
        c = max(c, d[chr(ord(s[i])+j)])
    color[i] = c+1
    d[s[i]] = c+1
print(max(color))
print(*color)