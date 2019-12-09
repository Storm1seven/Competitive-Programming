import math
from collections import deque, defaultdict
from sys import stdin, stdout
input = stdin.readline
# print = stdout.write
listin = lambda : list(map(int, input().split()))
mapin = lambda : map(int, input().split())
for _ in range(int(input())):
    n = int(input())
    a = list(map(int, input().split()))
    counter = defaultdict(int)
    for i in a:
        counter[i]+=1
    z = list(counter.values())
    z.sort(reverse = True)
    for i in range(len(z)-1):
        if z[i] <= z[i+1]:
            z[i+1] = max(z[i]-1, 0)
    print(sum(z))