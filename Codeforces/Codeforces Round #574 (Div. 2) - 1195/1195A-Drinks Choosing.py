import math
from collections import deque, defaultdict
from sys import stdin, stdout
input = stdin.readline
# print = stdout.write
listin = lambda : list(map(int, input().split()))
mapin = lambda : map(int, input().split())
n, k = mapin()
d = defaultdict(int)
for i in range(n):
    d[int(input())]+=1
ans = 0
extra = 0
for i in d.values():
    ans+=i//2 * 2
    extra+=i%2
print(ans+(extra+1)//2)